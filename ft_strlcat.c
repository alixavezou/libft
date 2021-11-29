/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:44:47 by alixavezou        #+#    #+#             */
/*   Updated: 2021/11/29 10:46:11 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(dst);
	k = ft_strlen(src);
	if (size <= j)
		return (size);
	while (j + i <= size - 1)
	{
		dst[j + i] == src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (j + k);
}
