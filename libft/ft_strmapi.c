/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 02:03:42 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/06 18:13:03 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strmapi()

// strmapi() applies function f to each character of the string s, and passing
// its index as first argument to create a new string with malloc resulting
// from successive applications of f.

// Return value is the string created from the successive applications of f.
// Returns NULL if the allocation fails.

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str_f;

	if (!s || !f)
		return (NULL);
	str_f = (char *)malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (str_f == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str_f[i] = (*f)(i, s[i]);
		i++;
	}
	str_f[i] = '\0';
	return (str_f);
}
