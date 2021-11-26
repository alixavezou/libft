/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavezou <aavezou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:49:32 by alixavezo         #+#    #+#             */
/*   Updated: 2021/11/26 18:09:06 by aavezou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*destination;
	const char	*source;
	size_t		i;

	destination = dst;
	source = src;
	i = 0;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
		if (source[i] == (char)c)
		{
			destination[i] = source[i];
			return (destination + i + 1);
		} 
	}
	return (NULL);
}
