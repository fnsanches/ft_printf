/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:16:58 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/04 16:03:47 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isalpha()

// isalpha() tests for an alphabetic character in the current locale.

// Return value is different from zero if c is an alphabetic.

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
