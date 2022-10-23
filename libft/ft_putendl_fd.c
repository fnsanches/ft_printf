/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:23:39 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/13 17:27:08 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putendln_fd()

// ft_putendln_fd() Outputs the string ’s’ to the given file descriptor
// followed by a newline.

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
