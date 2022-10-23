/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 01:10:43 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/13 16:56:36 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// atoi()

// atoi() converts the initial portion of the string pointed to by nptr to int.

// Return value is the converted value or 0 on error.

#include "libft.h"

static int	checkerr(int sign);

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	long	total;
	long	prev;

	i = 0;
	sign = 1;
	total = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		prev = total;
		total = total * 10 + (str[i] - '0');
		if (total < prev)
			return (checkerr(sign));
		i++;
	}
	return (total * sign);
}

static int	checkerr(int sign)
{
	if (sign > 0)
		return (-1);
	else
		return (0);
}
