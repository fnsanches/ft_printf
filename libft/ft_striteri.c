/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:14:45 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/08 21:22:28 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_striteri()

// ft_striteri() applies function f on each character of the string, passing
// its index as first argument. Each character is passed by address to f to be
// modified if necessary.

// Return value is none.

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
