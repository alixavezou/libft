/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:55:01 by alixavezou        #+#    #+#             */
/*   Updated: 2021/11/26 15:33:09 by alixavezou       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count = count + 1;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	ft_count_letters(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	while (ft_count_words(s, c))
	{
		while (*s && *s == c)
			s++;
		if (*s != c)
		{
			tab[i] = ft_substr(s, 0, ft_count_letters(s, c));
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	tab[i] = '\0';
	return (tab);
}

int	main(void)
{
	char	**dest;

	dest = ft_split("coucou?ca?va?mabelle?", '?');
	printf("%s\n", dest[0]);
	printf("%s\n", dest[1]);
	printf("%s\n", dest[2]);
	printf("%s\n", dest[3]);
	return (0);
}
