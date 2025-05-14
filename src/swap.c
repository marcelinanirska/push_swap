/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:36:40 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/14 15:41:13 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap(t_list **lst)
{
	int	index;
	int	content;

	if (!(*lst) || !(*lst)->next)
		return ;
	content = (*lst)->next->content;
	index = (*lst)->next->i;
	(*lst)->next->content = (*lst)->content;
	(*lst)->next->i = (*lst)->i;
	(*lst)->content = content;
	(*lst)->i = index;
}

void	sa(t_list **a, int *count)
{
	swap(a);
	(*count)++;
	write(1, "sa\n", 3);
}

void	sb(t_list **b, int *count)
{
	swap(b);
	(*count)++;
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b, int *count)
{
	swap(a);
	swap(b);
	(*count)++;
	write(1, "ss\n", 3);
}
