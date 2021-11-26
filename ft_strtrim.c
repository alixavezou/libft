/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:23:08 by alixavezou        #+#    #+#             */
/*   Updated: 2021/11/24 22:51:01 by alixavezou       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*dest;
	int			i;
	int			j;

	i = 0;
	if (!s1[i] && !set[i])
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[j]) && j > 0)
	{
		j--;
	}
	dest = ft_substr(s1, i, (j - i + 1));
	return (dest);
}
