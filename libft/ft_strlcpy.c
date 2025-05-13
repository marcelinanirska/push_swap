/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:58:40 by mnirska           #+#    #+#             */
/*   Updated: 2024/10/26 20:34:34 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	if (src_len < dstsize - 1)
	{
		ft_memcpy(dst, src, src_len + 1);
	}
	else if (dstsize)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (src_len);
}

/*int	main(void)
{
	char src[] = "its the source";
	char dst[50];
	printf("%lu\n", ft_strlcpy(dst, src, 0));
	//printf("%s\n", dst);
	printf("%lu\n", strlcpy(dst, src, 0));
	//printf("%s\n", dst);
}*/
