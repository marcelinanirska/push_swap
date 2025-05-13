/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:26:25 by mnirska           #+#    #+#             */
/*   Updated: 2024/11/18 12:27:41 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_printchar(va_arg(args, int));
	else if (format == 's')
		count += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		count += ft_printptrhex(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		count += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		count += ft_printunsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		count += ft_printhexlow(va_arg(args, unsigned int));
	else if (format == 'X')
		count += ft_printhexup(va_arg(args, unsigned int));
	else if (format == '%')
		count += ft_printchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		count;

	if (!str)
		return ('\0');
	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
			count += ft_format(args, str[++i]);
		else
			count += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
/*int main(void)
{
	printf("%% qwerty  %%\n");
	ft_printf("%% qwerty  %%\n");
}*/