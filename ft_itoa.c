/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agroup <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:44:32 by agroup            #+#    #+#             */
/*   Updated: 2020/11/12 16:44:33 by agroup           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int numbr)
{
	int		tempr;
	int		modul;
	int		lnstr;
	char	*str;

	modul = numbr < 0;
	tempr = numbr;
	lnstr = 1;
	while (tempr /= 10)
		lnstr++;
	str = (char*)malloc(lnstr + modul + 1);
	if (!str)
		return (NULL);
	str[lnstr + modul] = 0;
	if (modul)
		*str++ = '-';
	else
		numbr = -numbr;
	while (lnstr--)
	{
		str[lnstr] = -(numbr % 10) + 48;
		numbr = numbr / 10;
	}
	return (str - modul);
}
