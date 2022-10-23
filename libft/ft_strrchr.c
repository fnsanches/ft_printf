/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:51:48 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/13 17:34:54 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strrchr()

// strrchr() returns a pointer to the last occurrence of the character c in
// the string s.

// Return value is a pointer to matched character or NULL if not found.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	ch;

	ch = (unsigned char)c;
	len = ft_strlen((char *)s);
	if (ch == '\0')
		return ((char *)(&s[len]));
	while (--len >= 0)
	{
		if (s[len] == ch)
			return ((char *)(&s[len]));
	}
	return (NULL);
}
