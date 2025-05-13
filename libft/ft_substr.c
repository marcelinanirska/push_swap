/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 20:18:44 by mnirska           #+#    #+#             */
/*   Updated: 2024/10/26 20:35:00 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t size)
{
	size_t	i;
	size_t	str_len;
	char	*sub_str;

	i = 0;
	str_len = ft_strlen(str);
	if (!str)
		return (NULL);
	if (start > str_len)
		return (ft_strdup(""));
	if (size > ft_strlen(str + start))
		size = ft_strlen(str + start);
	sub_str = ft_calloc(size + 1, sizeof(char));
	if (!sub_str)
		return (NULL);
	while (i < size)
	{
		sub_str[i] = str[start];
		start++;
		i++;
	}
	return (sub_str);
}
/*
int	main(void)
{
	char str[] = "source";
	printf("%s", ft_substr(str, 6, 5));
	return (0);
}
*/