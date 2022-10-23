/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:41:16 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/06 18:13:30 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// itoa()

// itoa() allocates with malloc and returns a string representing the integer
// received as an argument. Negative numbers must be handled.

// Return value is the string representing the integer. NULL if allocation
// fails.

#include "libft.h"

static int	detsize(long int n)
{
	if (n < 0)
		return (1 + detsize(-n));
	if ((n / 10) == 0)
		return (1);
	else
		return (1 + detsize(n / 10));
}

static void	cvbase(long int n, char *number, long int i)
{
	if (n < 0)
	{
		number[0] = '-';
		n *= -1;
	}
	if (n >= 10)
		cvbase((n / 10), number, (i - 1));
	number[i] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	char		*number;
	long int	l;

	l = detsize(n);
	number = (char *)malloc((l + 1) * sizeof(char));
	if (!number)
		return (NULL);
	number[l--] = '\0';
	cvbase(n, number, l);
	return (number);
}
