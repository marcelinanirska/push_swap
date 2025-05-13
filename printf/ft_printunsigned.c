/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:55:43 by mnirska           #+#    #+#             */
/*   Updated: 2024/11/07 16:57:52 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count += ft_printunsigned(n / 10);
		count += ft_printunsigned(n % 10);
	}
	else
		count += ft_printchar(n + 48);
	return (count);
}

/*int main(void)
{
	ft_printunsigned(2345);
	printf("\n%u\n", 2345);
	printf("\n%d\n", ft_printunsigned(2345));
}*/