/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alixavezou <alixavezou@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:45:17 by alixavezou        #+#    #+#             */
/*   Updated: 2021/11/26 13:12:03 by alixavezou       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	espace;
	void	*pointeur;

	espace = count * size;
	pointeur = malloc(espace);
	if (!pointeur)
		return (NULL);
	ft_bzero(pointeur, espace);
	return (pointeur);
}
