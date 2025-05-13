/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss_pa_pb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:36:40 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/13 13:29:29 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a)
{
	int	index;
	int	content;

	if (!(*a)->next)
		handle_error("Error.");
	content = (*a)->next->content;
	index = (*a)->next->i;
	(*a)->next->content = (*a)->content;
	(*a)->next->i = (*a)->i;
	(*a)->content = content;
	(*a)->i = index;
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{
	int	index;
	int	content;

	if (!(*b)->next)
		handle_error("Error.");
	content = (*b)->next->content;
	index = (*b)->next->i;
	(*b)->next->content = (*b)->content;
	(*b)->next->i = (*b)->i;
	(*b)->content = content;
	(*b)->i = index;
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}

void	pa(t_list **a, t_list **b)
{
	t_list	*temp;

	if (!b)
		handle_error("Error.");
	temp = (*b)->next;
	lst_addfront(a, *b);
	*b = temp;
	if (*b)
		(*b)->prev = NULL;
	write(1, "pa\n", 3);
}


void	pb(t_list **a, t_list **b)
{
	t_list	*temp;

	if (!a)
		handle_error("Error.");
	temp = (*a)->next;
	lst_addfront(b, *a);
	*a = temp;
	if (*a)
		(*a)->prev = NULL;
	write(1, "pb\n", 3);
}