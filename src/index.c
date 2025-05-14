/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:21:23 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/14 18:53:44 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*get_min(t_list **a)
{
	t_list	*lst;
	t_list	*lst_min;
	int		min;

	if (!(*a))
		return (NULL);
	min = 0;
	lst_min = NULL;
	lst = *a;
	while (lst)
	{
		if ((lst->i == -1)
			&& (!min || lst->content < lst_min->content))
		{
			lst_min = lst;
			min = 1;
		}
		lst = lst->next;
	}
	return (lst_min);
}

void	ft_index(t_list **a)
{
	t_list	*lst;
	int		index;

	index = 0;
	if (!a)
		return ;
	lst = get_min(a);
	while (lst)
	{
		lst->i = index++;
		lst = get_min(a);
	}
}
