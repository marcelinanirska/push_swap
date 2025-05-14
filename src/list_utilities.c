/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utilities.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:30:35 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/14 18:37:23 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	lst_addfront(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		(*lst)->prev = NULL;
		(*lst)->next = NULL;
		return ;
	}
	(*lst)->prev = new;
	new->next = *lst;
	*lst = new;
	new->prev = NULL;
}

void	lst_addback(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		(*lst)->prev = NULL;
		(*lst)->next = NULL;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
}

t_list	*lst_new(int content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->i = -1;
	lst->next = NULL;
	lst->prev = NULL;
	return (lst);
}

t_list	*lst_last(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	lst_size(t_list *a)
{
	int		i;
	t_list	*lst;

	lst = a;
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
