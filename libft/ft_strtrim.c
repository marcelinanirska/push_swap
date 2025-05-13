/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:23:34 by mnirska           #+#    #+#             */
/*   Updated: 2024/10/28 13:49:54 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trimming(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*trimmed(const char *s1, size_t start, size_t size)
{
	size_t	i;
	char	*new_str;

	i = 0;
	if (size <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	new_str = ft_calloc(size + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	while (i < size)
	{
		new_str[i] = s1[start + i];
		i++;
	}
	return (new_str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (trimming(set, s1[i]))
		i++;
	while (trimming(set, s1[j]))
		j--;
	return (trimmed(s1, i, j - i + 1));
}
/*int	main(void)
{
	printf("%s", ft_strtrim("aaaaaa", "a"));
}*/
