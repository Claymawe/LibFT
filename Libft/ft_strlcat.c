/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:47:40 by mrobinso          #+#    #+#             */
/*   Updated: 2021/09/07 15:47:42 by mrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** the function appends string src to the end of dst.
** it will NULL_terminate unless maxlen is 0 or the original dst string was
** longer than maxlen.
*/

int	ft_strlcat(char *dst, const char *src, int maxlen)
{
	int	srclen;
	int	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen > maxlen)
	{
		dstlen = maxlen;
	}
	if (dstlen == maxlen || maxlen == 0)
	{
		return (dstlen + srclen);
	}
	if (srclen < maxlen - dstlen)
	{
		ft_memcpy(dst + dstlen, src, srclen + 1);
	}
	else
	{
		ft_memcpy(dst + dstlen, src, maxlen - dstlen - 1);
		dst[maxlen - 1] = '\0';
	}
	return (dstlen + srclen);
}
