/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 01:44:57 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/15 21:33:45 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// calloc()

// calloc() allocates unused space for array of nelem elements each of whose in
// bytes is elsize. The space shall be initialized to all bits 0.

// Return  values is a pointer to allocated or return as NULL if not possible.

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;
	size_t	total;

	if (nelem == 0 || elsize == 0)
	{
		nelem = 1;
		elsize = 1;
	}
	total = nelem * elsize;
	if (total / nelem != elsize)
		return (NULL);
	ptr = malloc(nelem * elsize);
	if (ptr)
		ft_bzero(ptr, nelem * elsize);
	return (ptr);
}
