/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:56:02 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/13 19:59:19 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **a, t_list **b, int *count)
{
	t_list	*temp;

	if (!(*b))
		handle_error("Error.");
	temp = (*b)->next;
	lst_addfront(a, *b);
	*b = temp;
	if (*b)
		(*b)->prev = NULL;
	(*count)++;
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b, int *count)
{
	t_list	*temp;

	if (!(*a))
		handle_error("Error.");
	temp = (*a)->next;
	lst_addfront(b, *a);
	*a = temp;
	if (*a)
		(*a)->prev = NULL;
	(*count)++;
	write(1, "pb\n", 3);
}
