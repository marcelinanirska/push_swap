/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:50:47 by mnirska           #+#    #+#             */
/*   Updated: 2024/10/26 20:33:46 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;

	temp = malloc(size * count);
	if (!temp)
		return (NULL);
	ft_bzero(temp, count * size);
	return (temp);
}

/*int	main(void)
{
	printf("%s", ft_calloc(4294967293, 4294967299));
	printf("%s", calloc(4294967293, 4294967299));
}
*/