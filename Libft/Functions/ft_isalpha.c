/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:31:22 by mrobinso          #+#    #+#             */
/*   Updated: 2021/09/07 10:38:54 by mrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_isalpha() function tests for any character for which if is
** upper and lower case is true.  
** The value of the argument must be representable as an
** unsigned char or the value of EOF.
*/

int	ft_isalpha(int c)
{
	if ((c > 64 && < 91) || (c > 96 && c <= 122))
	{
		return (1);
	}
	return (0);
}
