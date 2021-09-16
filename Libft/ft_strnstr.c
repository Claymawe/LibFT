/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:12 by druth             #+#    #+#             */
/*   Updated: 2021/09/07 10:36:12 by druth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	size_t	track;
	size_t	finder;

	if (str == NULL || to_find == NULL)
		return (NULL);
	track = 0;
	finder = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[track] != '\0' && track < size)
	{
		if (str[track] == to_find[finder])
			finder++;
		else
			finder = 0;
		if (to_find[finder] == '\0')
			return ((char *)(str + track - finder + 1));
		track++;
	}
	return (NULL);
}
