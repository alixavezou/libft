/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:27:58 by alixavezou        #+#    #+#             */
/*   Updated: 2021/11/25 13:08:52 by alixavezou       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count = 1;
	if (n < 0)
	{
		n = n * -1;
		count = 1;
	}
	if (n > 0)
	{
		n = n / 10;
		count = count + 1;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		i;

	i = ft_count(n);
	dest = malloc(sizeof(char) * i + 1);
	if (!dest)
		return (NULL);
	dest[i] = '\0';
	i--;
	if (n == 0)
	{
		dest[i] = '0';
	}
	if (n < 0)
	{
		dest[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		dest[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (dest);
}
