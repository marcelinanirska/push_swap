/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:48:54 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/13 13:27:58 by mnirska          ###   ########.fr       */
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
int		is_order(t_list **lst, int size);
void	reset_index(t_list **a);
void	rotate_to_min(t_list **lst, int size);
void	simple_sort(t_list **a, t_list **b);
void	radix_sort(t_list **a, t_list **b);

void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

void	lst_addfront(t_list **stack, t_list *news);
void	lst_addback(t_list **stack, t_list *news);
t_list	*lst_new(int content);
t_list	*lst_last(t_list *stack);
int	lst_size(t_list *stack);

#endif