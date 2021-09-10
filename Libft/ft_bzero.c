/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:19:08 by mrobinso          #+#    #+#             */
/*   Updated: 2021/09/07 14:23:53 by mrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The bzero function writes n zeroed bytes \0 to the string s.
** If n is zero, bzero does nothing
*/

void	ft_bzero(void *s, int n)
{
	if (n != 0)
	{
		ft_memset(s, '0', n);
	}
}
