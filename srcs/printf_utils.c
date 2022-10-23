/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 02:54:36 by fsanches          #+#    #+#             */
/*   Updated: 2022/05/07 01:17:02 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_utoa(unsigned int num, char *str, int base)
{
	const char		digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int				i;
	unsigned int	remain;

	if ((base < 2) || (base > 36))
		return (NULL);
	i = 0;
	while (num != 0)
	{
		remain = num % base;
		str[i++] = digits[remain];
		num /= base;
	}
	str[i] = '\0';
	ft_rev_string(str);
	return (str);
}

char	*ft_ultoa(unsigned long int num, char *str, int base)
{
	const char		digits[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	int				i;
	unsigned int	remain;

	if ((base < 2) || (base > 36))
		return (NULL);
	i = 0;
	while (num != 0)
	{
		remain = num % base;
		str[i++] = digits[remain];
		num /= base;
	}
	str[i] = '\0';
	ft_rev_string(str);
	return (str);
}

char	*ft_rev_string(char *string)
{
	int		len;
	int		i;
	char	temp;

	len = ft_strlen(string);
	i = -1;
	while (++i < ft_strlen(string) / 2)
	{
		temp = string[i];
		string[i] = string[len - i - 1];
		string[len - i - 1] = temp;
	}
	return (string);
}
