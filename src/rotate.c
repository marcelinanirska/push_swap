/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 21:27:02 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/14 18:40:00 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate(t_list **lst)
{
	t_list	*lst_end;

	if (!(*lst) || !(*lst)->next)
		return ;
	lst_end = lst_last(*lst);
	lst_end->next = *lst;
	*lst = (*lst)->next;
	(*lst)->prev = NULL;
	lst_end->next->prev = lst_end;
	lst_end->next->next = NULL;
}

void	ra(t_list **a, int *count)
{
	rotate(a);
	(*count)++;
	write(1, "ra\n", 3);
}

void	rb(t_list **b, int *count)
{
	rotate(b);
	(*count)++;
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b, int *count)
{
	rotate(a);
	rotate(b);
	(*count)++;
	write(1, "rr\n", 3);
}
