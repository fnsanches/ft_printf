/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:28:08 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/08 23:33:19 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memcpy()

// memcpy() copies n bytes from memory area src to memory area dest. Memory 
// areas must not overlap.

// Returns a pointer to dest.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dstc;
	unsigned char	*srcc;

	if (!dest && !src)
		return (NULL);
	i = 0;
	dstc = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	while (i < n)
	{
		dstc[i] = srcc[i];
		i++;
	}
	return (dest);
}
