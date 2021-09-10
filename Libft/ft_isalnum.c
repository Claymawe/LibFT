/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:29:21 by mrobinso          #+#    #+#             */
/*   Updated: 2021/09/07 10:29:59 by mrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_isalnum() function tests for any character for which 'c' > 64,96,45
and < 91,123,58 It must return either a
** unsigned char or the value of EOF.
*/

int	ft_isalnum(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (1);
	else if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
