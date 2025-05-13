/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptrhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcelina <marcelina@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:01:28 by mnirska           #+#    #+#             */
/*   Updated: 2024/11/08 09:17:11 by marcelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptrhex(void *ptr)
{
	int				count;
	int				i;
	unsigned long	addr;
	char			result[16];
	char			*hexa;

	count = 0;
	i = 0;
	addr = (unsigned long)ptr;
	hexa = "0123456789abcdef";
	if (!ptr)
		return (count += write(1, "0x0", 3));
	count += write(1, "0x", 2);
	if (addr == 0)
		return (count += ft_printchar('0'));
	while (addr > 0)
	{
		result[i++] = hexa[addr % 16];
		addr /= 16;
	}
	while (--i >= 0)
		count += ft_printchar(result[i]);
	return (count);
}

/*int	main(void)
{
	ft_printptrhex((void *)-14523);
	printf("\n%p\n", (void *)-14523);
	printf("\n%d\n", ft_printptrhex((void *)-14523));
}*/