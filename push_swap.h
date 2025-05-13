/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:48:54 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/13 20:46:36 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include "libft/libft.h"
# include "printf/ft_printf.h"

typedef struct s_list
{
	int				content;
	int				i;
	struct s_list	*next;
	struct s_list	*prev;
}				t_list;


void	handle_error(char *s);
void	free_split(char **split);
void	ft_index(t_list **a);
int		is_sorted(t_list **lst);
int		is_order(t_list **lst, int size, int *count);
void	reset_index(t_list **a);
void	rotate_to_min(t_list **lst, int size, int *count, int target_index);
void	simple_sort(t_list **a, t_list **b, int *count);
void	radix_sort(t_list **a, t_list **b, int *count);

void	sa(t_list **a, int *count);
void	sb(t_list **b, int *count);
void	ss(t_list **a, t_list **b, int *count);
void	pa(t_list **a, t_list **b, int *count);
void	pb(t_list **a, t_list **b, int *count);
void	ra(t_list **a, int *count);
void	rb(t_list **b, int *count);
void	rr(t_list **a, t_list **b, int *count);
void	rra(t_list **a, int *count);
void	rrb(t_list **b, int *count);
void	rrr(t_list **a, t_list **b, int *count);

void	lst_addfront(t_list **stack, t_list *news);
void	lst_addback(t_list **stack, t_list *news);
t_list	*lst_new(int content);
t_list	*lst_last(t_list *stack);
int	lst_size(t_list *stack);

int find_smallest_position(t_list **lst);

#endif