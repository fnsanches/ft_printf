/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:34:36 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/04 16:07:08 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isascii()

// isascii() tests whether c os a 7-bit US-ASCII character code.

// Return value is different from zero if c is ASCII character (from 0 to 127).

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
