/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:24:44 by mnirska           #+#    #+#             */
/*   Updated: 2024/10/17 11:22:45 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	char_c;

	i = 0;
	str = (unsigned char *)s;
	char_c = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == char_c)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char a[] = "hello eworld";
	printf("%s\n", ft_memchr(a, 'e', 5));
	printf("%s\n", memchr(a, 'e', 5));
}
*/