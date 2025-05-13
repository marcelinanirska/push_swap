/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:44:23 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/13 13:29:02 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		split[i] = NULL;
		i++;
	}
	free(split);
}

int	is_sorted(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	while (temp->next)
	{
		if (temp->i > temp->next->i)
			return (-1);
		temp = temp->next;
	}
	return (1);
}

int	is_order(t_list **lst, int size)
{
	int	i;

	i = 0;
	while ((*lst)->i != 0)
	{
		ra(lst);
		i++;
	}
	if (is_sorted(lst) == 1)
	{
		if (i > (size / 2))
		{
			if (size == 5 && i == 3)
				ft_printf("rra\n");
			ft_printf("rra\n");
		}
		else
			while (i-- > 0)
				ft_printf("ra\n");
		return (1);
	}
	else
		while (i-- > 0)
			rra(lst);
	return (0);
}

void	reset_index(t_list **a)
{
	t_list	*lst;

	lst = *a;
	while (lst)
	{
		lst->i = -1;
		lst = lst->next;
	}
	ft_index(a);
}

void	rotate_to_min(t_list **lst, int size)
{
	int	i;

	i = 0;
	while ((*lst)->i != 0)
	{
		ra(lst);
		i++;
	}
	if ((i > (size / 2)))
	{
		if (size == 5 && i == 3)
			ft_printf("rra\n");
		ft_printf("rra\n");
	}
	else
	{
		while (i > 0)
		{
			ft_printf("ra\n");
			i--;
		}
	}
}
