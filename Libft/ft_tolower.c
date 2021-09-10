/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:38:03 by mrobinso          #+#    #+#             */
/*   Updated: 2021/09/07 10:39:44 by mrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** The ft_tolower() function converts an upper-case letter to the correspond-ing
** lower-case letter.  The argument must be representable as an unsigned char
*/

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (c + 32);
	else
		return (c);
}
