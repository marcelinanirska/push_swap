/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:48:28 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/13 20:16:12 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_input(int ac, char **av, t_list **a)
{
	int	i;
	int	j;
	char **split;

	i = 1;
	while (i < ac)
	{
		j = 0;
		split = ft_split(av[i], 32);
		if (!split[j])
			return (0);
		while (split[j])
		{
			if (ft_atol(split[j]) > INT_MAX
				|| ft_atol(split[j]) < INT_MIN)
				handle_error("Error.");
			lst_addback(a, lst_new(ft_atoi(split[j])));
			j++;
		}
		free_split(split);
		i++;
	}
	return (1);
}

static int	check_duplicates(t_list *lst)
{
	int temp;
	t_list	*duplicate;

	while (lst && lst->next)
	{
		temp = lst->content;
		duplicate = lst;
		while (duplicate->next)
		{
			duplicate = duplicate->next;
			if (duplicate->content == temp)
				return (-1);
		}
		lst = lst->next;
	}
	return (1);

}

static void	lst_clear(t_list **stack)
{
	if (!stack || !(*stack))
		return ;
	lst_clear(&(*stack)->next);
	free(*stack);
	*stack = NULL;
}

static void	validate_input(int ac, char **av, t_list **a)
{
	if (!check_input(ac, av, a))
		handle_error("Error.");
	if (check_duplicates(*a) == -1)
		handle_error("Error.");
}


int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		count;

	count = 0;
	if (ac == 1)
		return (0);
	a = NULL;
	b = NULL;
	validate_input(ac, av, &a);
	ft_index(&a);
	if (is_sorted(&a) == 1)
	{
		lst_clear(&a);
		return (0);
	}
	if (lst_size(a) <= 5)
		simple_sort(&a, &b, &count);
	else
		radix_sort(&a, &b, &count);
	ft_printf("Total operations: %d\n", count);
	lst_clear(&a);
	lst_clear(&b);
	return (0);
}

