/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:56:24 by mnirska           #+#    #+#             */
/*   Updated: 2024/11/18 12:45:03 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
	{
		count += write(1, "(null)", 6);
		return (count);
	}
	while (str[i])
	{
		count += write(1, &str[i], 1);
		i++;
	}
	return (count);
}

/*int main(void)
{
	ft_printstr("asdfg");
	printf("\n%s\n", "asdfg");
	printf("\n%d\n", ft_printstr("asdfg"));
}*/