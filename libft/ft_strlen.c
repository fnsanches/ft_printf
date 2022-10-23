/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:39:52 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/08 20:17:37 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strlen()

// The strlen() function calculates the length of the string pointed to by s,
// excluding the terminating null byte. ('\0').

// Return value is the number of bytes in the string s.

#include "libft.h"

int	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
