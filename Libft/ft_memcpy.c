/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobinso <mrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:31:12 by mrobinso          #+#    #+#             */
/*   Updated: 2021/09/10 10:35:28 by mrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The funtion copies n bytes from memory area src to memory area dst
** if dst and src overlap behaviour is undefined
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*access_src;
	unsigned char		*edit_dst;

	i = 0;
	access_src = (unsigned char *)src;
	edit_dst = (unsigned char *)dst;
	while (i < n)
	{
		edit_dst[i] = access_src[i];
		i++;
	}
	return (dst);
}
