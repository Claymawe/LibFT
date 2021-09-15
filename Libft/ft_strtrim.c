/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobinso <mrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:01:18 by mrobinso          #+#    #+#             */
/*   Updated: 2021/09/15 13:12:50 by mrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates with malloc(3) add returns a copy of s1 with the character specified
**in set removed from the beginning and the end of the string.
*/

static int	ft_get_start(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlent(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static int	ft_get_end(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	i = ft_strlent(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - 1 - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = ft_get_start(s1, set);
	end = ft_get_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	res = (char *)malloc(sizeof(char) * (end - start + 1));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1 + start, end - start + 1);
	return (res);
}
