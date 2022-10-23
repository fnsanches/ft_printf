/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:37:24 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/04 16:09:47 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isprint()

// isprint() tests for a printable character.

// Return value is different from zero if c is a printable character.

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
