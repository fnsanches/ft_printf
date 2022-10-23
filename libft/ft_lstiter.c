/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:35:19 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/09 00:37:36 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_lstiter()

// ft_lstiter() iterates the list lst and applies the function f on the 
// content of each node.

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
