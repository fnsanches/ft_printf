/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:37:18 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/13 17:15:23 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// tolower()

// tolower() convert uppercase letter to lowercase.

// Return value is the converted letter or c if conversion was not possible.

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
