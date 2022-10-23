/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:28:19 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/08 20:46:16 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memchr()

// memchr() scans the initial n bytes of the memory area pointed by s for the
// first instance of c.

// Return  value is a pointer to the matching byte or NULL if byte is not found.

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
