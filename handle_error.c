/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:32:02 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/13 23:55:29 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_error(char *s)
{
	int i;

	i = 0;
	while (s[i])
		write(2, &s[i++], 1);
	write(2, "\n", 1);
	exit(1);
}

int	check_digit(char **av)
{
	int	i;
	int 

	i = 0;
	if (av[i] == '-')
		i++;
	while (av[i])
	{
		if (!ft_isdigit(av[i]))
			return (0);
		i++;
	}
	return (1);
}