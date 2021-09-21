/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobinso <mrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 11:40:52 by mrobinso          #+#    #+#             */
/*   Updated: 2021/09/21 12:39:22 by mrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates with malloc(3) and returns a new element. The variable Content
** is initialized with the value of the parameter content. The variable next
** is initialized to NULL.
*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (0);
	if (content == NULL)
	{
		list -> content = NULL;
		list -> content_size = 0;
		list -> next = NULL;
		return (list);
	}
	list ->content = malloc(content_size);
	if (!list -> content)
		return (0);
	ft_memmove(list -> content, content, content_size);
	list -> content_size = content_size;
	list -> next = NULL;
	return (list);
}
