/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:11:17 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/08 23:32:14 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_lstlast()

// ft_lstlast() returns the last node of the list.

// Return value is the last node of the list.

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
