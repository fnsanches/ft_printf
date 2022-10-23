/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 01:54:30 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/08 23:34:13 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strdup()

// strdup() duplicates a string

// Return value is a pointer to a new string which is the duplicate of the
// string s.

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;

	dup = (char *)malloc(ft_strlen(s) + 1);
	if (!dup)
		return (0);
	ft_memcpy(dup, s, ft_strlen(s) + 1);
	return (dup);
}
