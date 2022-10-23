/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:19:19 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/06 18:26:42 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putchar_fd()

// ft_putchar_fd() outputs the character c to the given file descriptor.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
