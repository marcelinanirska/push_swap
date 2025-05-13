/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:47:01 by mnirska           #+#    #+#             */
/*   Updated: 2024/10/30 15:18:27 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
		if (result > 9223372036854775807 && sign < 0)
			return (0);
		if (result > 9223372036854775807 && sign > 0)
			return (-1);
	}
	return ((int)result * sign);
}

/*int 	main(void)
{
	char str[] = "-922687689768796879687966987337";
	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
}*/
