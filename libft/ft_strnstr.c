/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:47:52 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/08 21:07:49 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strnstr()

// strnstr() locates the first occurrence of the string little in the string
// big, where not more than len characters are searched.

// Return value is the string big if little is an empty string,
// if little occurs nowhere in big, NULL is returned,
// otherwise a pointer to the first character of the first occurrence little
// is returned.

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		k = 0;
		while (big[i + k] == little[k] && (i + k) < len)
		{
			if (big[i + k] == '\0' && little[k] == '\0')
				return ((char *)&big[i]);
			k++;
		}
		if (little[k] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (0);
}
