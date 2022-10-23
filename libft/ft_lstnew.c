/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 23:01:11 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/09 16:41:52 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_lstnew()

// ft_lstnew() allocates with malloc and returns a new node. The member
// variable content is initialized with the value of the parameter content.
// The variable next is initialized to NULL.

// Return value is the new node

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}
