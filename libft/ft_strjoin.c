/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:34:15 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/05 22:53:19 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strjoin()

// ft_strjoin() allocates with malloc and returns a new string, which is the
// result of the concatenation of s1 and s2

// Return value is the new string, and NULL if the allocation fails.

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;
	size_t	s1len;
	size_t	s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = (ft_strlen((char *)s1));
	s2len = (ft_strlen((char *)s2));
	newstring = (char *)malloc((s1len + s2len + 1) * sizeof(char));
	if (newstring == NULL)
		return (NULL);
	ft_strlcpy(&newstring[0], s1, s1len + 1);
	ft_strlcpy(&newstring[s1len], s2, s2len + 1);
	return (newstring);
}
