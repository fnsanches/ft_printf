/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:46:23 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/08 23:49:39 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_lstdelone()

// ft_lstdelone() takes as a parameter a node and frees the memory of the
// node's content using the function del given as a parameter and free the
// node. THe memory of next must not be freed.

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
