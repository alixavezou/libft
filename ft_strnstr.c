/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:13:50 by alixavezou        #+#    #+#             */
/*   Updated: 2021/11/24 22:47:55 by alixavezou       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return (&big);
	while (big[i] != '\0' && len >= little_len)
	{
		if (ft_strncmp(big[i], little, little_len) == 0)
			return ((char *) &big[i]);
		i++;
		len--;
	}
}
