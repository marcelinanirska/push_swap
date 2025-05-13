/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:06:41 by mnirska           #+#    #+#             */
/*   Updated: 2024/11/18 12:45:19 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count = write(1, "-2147483648", 11);
		return (count);
	}
	if (n < 0)
	{
		count += ft_printchar('-');
		n = -n;
	}
	if (n > 9)
	{
		count += ft_printnbr(n / 10);
		count += ft_printnbr(n % 10);
	}
	else
		count += ft_printchar(n + 48);
	return (count);
}

/*int main(void)
{
	ft_printnbr(-2147483648);
	printf("\n%ld\n", -2147483648);
	printf("\n%d\n", ft_printnbr(-2147483648));
}*/