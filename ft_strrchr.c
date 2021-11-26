/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:19:56 by alixavezou        #+#    #+#             */
/*   Updated: 2021/11/24 22:49:17 by alixavezou       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = ft_strlen((char *)s);
	while (s[i - 1])
	{
		if (s[i] == '\0')
			return (NULL);
		if (s[i] == c)
			return ((char *)s);
		i--;
	}
	return (NULL);
}
