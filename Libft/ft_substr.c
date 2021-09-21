/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobinso <mrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:23:15 by mrobinso          #+#    #+#             */
/*   Updated: 2021/09/17 11:22:38 by mrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates with malloc(3) and returns a substring from the string 's'
** the substring begins at index 'start' and is of maximum size 'len'
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rtn;
	size_t	i;

	if (!s)
	{
		return (NULL);
	}
	if (start > len)
	{	
		return (ft_strdup(""));
	}
	rtn = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!rtn)
	{
		return (0);
	}
	while (i < len)
	{
		rtn[i] = *(s + start + i);
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
