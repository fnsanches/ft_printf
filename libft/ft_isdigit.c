/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:28:39 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/04 16:08:04 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isdigit()

// isdigit() tests for a numeric character in the current locale.

// Return value is different from zero if c is a digits.

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
