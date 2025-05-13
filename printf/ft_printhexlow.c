/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexlow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:30:58 by mnirska           #+#    #+#             */
/*   Updated: 2024/11/07 17:57:15 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexlow(unsigned int n)
{
	char	*hexa;
	int		count;

	hexa = "0123456789abcdef";
	count = 0;
	if (n > 15)
	{
		count += ft_printhexlow(n / 16);
		count += ft_printhexlow(n % 16);
	}
	else
		count += ft_printchar(hexa[n]);
	return (count);
}

/*int main(void)
{
	ft_printhexlow(23456789);
	printf("\n%x\n", 23456789);
	printf("\n%d\n", ft_printhexlow(23456789));
}*/