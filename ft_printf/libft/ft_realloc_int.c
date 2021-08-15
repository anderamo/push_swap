/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamorin- <aamorin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 19:56:04 by aamorin-          #+#    #+#             */
/*   Updated: 2021/08/03 20:14:45 by aamorin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_realloc_int(int *ptr, unsigned int newSize, unsigned int curSize)
{
	int			*newPtr;

	if (ptr == 0)
	{
		return (malloc(newSize));
	}
	if (newSize <= curSize)
	{
		return (ptr);
	}
	newPtr = malloc(newSize);
	bcopy(ptr, newPtr, (int) curSize);
	free(ptr);
	return (newPtr);
}
