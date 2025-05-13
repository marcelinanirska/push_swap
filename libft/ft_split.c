/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:04:31 by mnirska           #+#    #+#             */
/*   Updated: 2024/10/26 20:16:58 by mnirska          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strs_count(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*ft_word(const char *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*ft_free(char **strs, int no_of_words)
{
	int	i;

	i = 0;
	while (i < no_of_words)
		free(strs[i++]);
	free(strs);
	return (NULL);
}

char	**ft_splitting(const char *s, char **strs, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			strs[j] = ft_word(&s[i], c);
			if (!strs[j])
				return (ft_free(strs, j));
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
		while (s[i] && s[i] == c)
			i++;
	}
	strs[j] = 0;
	return (strs);
}

char	**ft_split(const char *s, char c)
{
	char	**strs;

	if (!s)
		return (NULL);
	strs = malloc(sizeof(*strs) * (strs_count(s, c) + 1));
	if (!strs)
		return (NULL);
	return (ft_splitting(s, strs, c));
}

/*int	main(void)
{
	int		i;
	char	*s;
	char	c;
	char	**tab;

	s = "hello!";
	c = ' ';
	tab = ft_split(s, c);
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
*/