/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:32:02 by mnirska           #+#    #+#             */
/*   Updated: 2025/05/14 18:49:19 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	handle_error(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		write(2, &s[i++], 1);
	write(2, "\n", 1);
	exit(1);
}

static int	is_valid_number(char *s)
{
	int	i;

	if (!s)
		return (0);
	if ((s[0] == '+' || s[0] == '-') && s[1])
		i = 1;
	else
		i = 0;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (i > 0);
}

int	check_digit(int ac, char **av)
{
	char	**args;
	int		i;

	if (ac == 2)
	{
		args = ft_split(av[1], ' ');
		if (!args)
			return (0);
	}
	else
		args = &av[1];
	i = 0;
	while (args[i])
	{
		if (!is_valid_number(args[i]))
		{
			if (ac == 2)
				free_split(args);
			return (0);
		}
		i++;
	}
	if (ac == 2)
		free_split(args);
	return (1);
}
