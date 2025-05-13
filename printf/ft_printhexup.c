/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:30:36 by mnirska           #+#    #+#             */
/*   Updated: 2024/11/07 16:58:07 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexup(unsigned int n)
{
	char	*hexa;
	int		count;

	hexa = "0123456789ABCDEF";
	count = 0;
	if (n > 15)
	{
		count += ft_printhexup(n / 16);
		count += ft_printhexup(n % 16);
	}
	else
		count += ft_printchar(hexa[n]);
	return (count);
}

/*int main(void)
{
	ft_printhexup(23456789);
	printf("\n%X\n", 23456789);
	printf("\n%d\n", ft_printhexup(23456789));
}*/