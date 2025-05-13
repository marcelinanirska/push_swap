/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:28:16 by mnirska           #+#    #+#             */
/*   Updated: 2024/10/17 11:20:32 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		j;
	char	char_c;

	i = 0;
	j = -1;
	char_c = (char) c;
	while (str[i])
	{
		if (str[i] == char_c)
		{
			j = i;
		}
		i++;
	}
	if (str[i] == char_c)
	{
		j = i;
	}
	if (j == -1)
	{
		return (NULL);
	}
	return ((char *)&str[j]);
}
/*
int	main(void)
{
	char	a[] = "hello world elipsa";

	printf("%s\n", ft_strrchr(a, 'e'));
	printf("%s\n", strrchr(a, 'e'));
}
*/