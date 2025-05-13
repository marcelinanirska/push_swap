/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:31:24 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/13 12:34:55 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_tree(t_list **lst)
{
	while (is_sorted(lst) != 1)
	{
		if (((*lst)->i > (*lst)->next->i)
			&& ((*lst)->i < (*lst)->next->next->i))
			sa(lst);
		else if (((*lst)->i > ((*lst)->next->i))
			&& ((*lst)->i > (*lst)->next->next->i))
			ra(lst);
		else
			rra(lst);
	}
}

static void	sort_four(t_list **a, t_list **b)
{
	if (is_order(a, 4) == 1)
		return ;
	rotate_to_min(a, 4);
	pb(a, b);
	reset_index(a);
	sort_tree(a);
	pa(a, b);
}

void	simple_sort(t_list **a, t_list **b)
{
	int	size;

	size = lst_size(*a);
	if (size == 3)
		sort_tree(a);
	else if (size == 4)
		sort_four(a, b);
	else
	{
		if (is_order(a, 5) == 1)
			return ;
		rotate_to_min(a, 5);
		pb(a, b);
		reset_index(a);
		sort_four(a, b);
		pa(a, b);
	}
}
