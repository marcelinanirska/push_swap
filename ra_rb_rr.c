/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:27:02 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/13 13:09:01 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a)
{
	t_list	*lst;

	if (!(*a) || !(*a)->next)
		handle_error("Error.");
	lst = lst_last(*a);
	lst->next = *a;
	*a = (*a)->next;
	(*a)->prev = NULL;
	lst->next->prev = lst;
	lst->next->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	t_list	*lst;

	if (!(*b) || !(*b)->next)
		handle_error("Error.");
	lst = lst_last(*b);
	lst->next = *b;
	*b = (*b)->next;
	(*b)->prev = NULL;
	lst->next->prev = lst;
	lst->next->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}