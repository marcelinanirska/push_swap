/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:07:03 by mnirska           #+#    #+#             */
/*   Updated: 2024/10/19 20:52:53 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	char_c;

	i = 0;
	char_c = (char)c;
	while (str[i])
	{
		if (str[i] == char_c)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if (str[i] == char_c)
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}
/*
int main (void)
{
	char	a[] = "hello world";

	printf("%s\n", ft_strchr(a, 'e'));
	printf("%s\n", strchr(a, 'e'));
}
*/