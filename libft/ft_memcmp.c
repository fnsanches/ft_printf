/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:39:22 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/08 23:34:26 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memcmp()

// memcmp() compares the first n bytes of the memory areas s1 and s2

// Return value is an integer depending on results of comparison, for a non zero
// return value, the sign is determined by the difference between the first pair
// of bytes that differ in s1 and s2.

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
