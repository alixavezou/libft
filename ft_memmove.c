/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:26:37 by alixavezou        #+#    #+#             */
/*   Updated: 2021/11/24 22:34:41 by alixavezou       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *dst, const void *src, size_t len)
{
	char		*destination;
	const char	*source;
	size_t		i;

	destination = dst;
	source = src;
	i = 0;
	if (destination > source)
		while (len-- > 0)
			destination[len] = source[len];
	else
	{
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	}
	return (destination);
}
