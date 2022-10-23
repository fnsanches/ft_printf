/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:30:54 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/04 16:03:05 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isalnum()

// isalnum() tests for an alphanumeric character in the current locale.

// Return value is different from zero if c is an alphanumeric.

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0 || ft_isdigit(c) != 0)
		return (1);
	else
		return (0);
}
