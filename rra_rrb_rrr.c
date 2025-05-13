/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:53:41 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/13 13:08:45 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a)
{
	t_list	*lst;

	if (!(*a) || !(*a)->next)
		handle_error("Error.");
	lst = lst_last(*a);
	lst->prev->next = NULL;
	lst->prev = NULL;
	lst->next = *a;
	(*a)->prev = lst;
	*a = (*a)->prev;
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	t_list	*lst;

	if (!(*b) || !(*b)->next)
		handle_error("Error.");
	lst = lst_last(*b);
	lst->prev->next = NULL;
	lst->prev = NULL;
	lst->next = *b;
	(*b)->prev = lst;
	*b = (*b)->prev;
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}