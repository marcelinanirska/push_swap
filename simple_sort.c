/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:31:24 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/13 23:25:51 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_list **lst, int *count)
{
	while (is_sorted(lst) != 1)
	{
		if (((*lst)->i > (*lst)->next->i)
			&& ((*lst)->i < (*lst)->next->next->i))
			sa(lst, count);
		else if (((*lst)->i > ((*lst)->next->i))
			&& ((*lst)->i > (*lst)->next->next->i))
			ra(lst, count);
		else
			rra(lst, count);
	}
}

static void	sort_four(t_list **a, t_list **b, int *count)
{
	if (is_sorted(a) == 1)
		return ;
	rotate_to_min(a, 4, count, 0);
	pb(a, b, count);
	sort_three(a, count);
	pa(a, b, count);
}

static void	sort_five(t_list **a, t_list **b, int *count)
{
	if (is_sorted(a) == 1)
		return ;
	//printf("r min\n");
	rotate_to_min(a, 5, count, 0);
	pb(a, b, count);
	//printf("res\n");
	//printf("r min\n");
	if ((*a) != get_min(a))
		rotate_to_min(a, 4, count, 1);
	pb(a, b, count);
	//printf("res\n");
	sort_three(a, count);
	pa(a, b, count);
	pa(a, b, count);
}

// void test(t_list **a)
// {
// 	t_list *tmp = *a;
// 	while (tmp)
// 	{
// 		printf("%d = %d\n", tmp->i, tmp->content);
// 		tmp = tmp->next;
// 	}
// }

void	simple_sort(t_list **a, t_list **b, int *count)
{
	int	size;

	size = lst_size(*a);
	if (size == 2)
		sa(a, count);
	if (size == 3)
		sort_three(a, count);
	else if (size == 4)
		sort_four(a, b, count);
	else
		sort_five(a, b, count);
	// test(a);
}
