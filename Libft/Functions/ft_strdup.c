/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobinso <mrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:44:47 by mrobinso          #+#    #+#             */
/*   Updated: 2021/09/10 11:50:00 by mrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** this function allocates sufficient memory for a copy of the string
** s1 does the copy, and applies a pointer to it, if no memory is avaliable
** NULL is applied.
*/

char	*ft_strdup(const char *s1)
{
	int		s1_len;
	char	*str_copy;
	int		i;

	s1_len = ft_strlen(s1);
	str_copy = malloc(sizeof(*str_copy) * (s1_len + 1));
	if (str_copy)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			str_copy[i] = s1[i];
			i++;
		}
		str_copy[i] = '\0';
	}
	return (str_copy);
}
