/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:23:20 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/04 16:27:34 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// bzero()

// bzero() erases data in the n bytes of the memory starting at s, by writing
// zeros to that area.

// Returns no value.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
