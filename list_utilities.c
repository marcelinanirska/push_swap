/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utilities.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:30:35 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/13 12:41:10 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_addfront(t_list **stack, t_list *news)
{
	if (!stack || !news)
		return ;
	if (!(*stack))
	{
		*stack = news;
		(*stack)->prev = NULL;
		(*stack)->next = NULL;
		return ;
	}
	(*stack)->prev = news;
	news->next = *stack;
	*stack = news;
	news->prev = NULL;
}

void	lst_addback(t_list **stack, t_list *news)
{
	t_list	*tmp;

	if (!stack || !news)
		return ;
	if (!(*stack))
	{
		*stack = news;
		(*stack)->prev = NULL;
		(*stack)->next = NULL;
		return ;
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = news;
	news->prev = tmp;
}

t_list	*lst_new(int content)
{
	t_list	*stack;

	stack = malloc(sizeof(t_list));
	if (!stack)
		return (NULL);
	stack->content = content;
	stack->i = -1;
	stack->next = NULL;
	stack->prev = NULL;
	return (stack);
}

t_list	*lst_last(t_list *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

int	lst_size(t_list *stack)
{
	int		i;
	t_list	*lst;

	lst = stack;
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
