/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:37:47 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/13 17:15:14 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_lstmap()

// ft_lstmap() iterates the list lst and applies the function f on the content
// of each node. Creates a new list resulting of the successive applications
// of the function f. The del function is used to delete the contents of a
// node if needed.

// Return value is the new list, and NULL if the allocation fails.

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*ele;

	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
		ele = ft_lstnew(f(lst->content));
		if (!ele)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, ele);
		lst = lst->next;
	}
	return (new_lst);
}
