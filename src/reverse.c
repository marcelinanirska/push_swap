/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:53:41 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/14 18:39:49 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	reverse(t_list **a)
{
	t_list	*lst;

	if (!(*a) || !(*a)->next)
		handle_error("Error");
	lst = lst_last(*a);
	lst->prev->next = NULL;
	lst->prev = NULL;
	lst->next = *a;
	(*a)->prev = lst;
	*a = (*a)->prev;
}

void	rra(t_list **a, int *count)
{
	reverse(a);
	(*count)++;
	write(1, "rra\n", 4);
}

void	rrb(t_list **b, int *count)
{
	reverse(b);
	(*count)++;
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b, int *count)
{
	reverse(a);
	reverse(b);
	(*count)++;
	write(1, "rrr\n", 4);
}
