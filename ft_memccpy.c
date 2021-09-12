/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agroup <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:50:23 by agroup            #+#    #+#             */
/*   Updated: 2020/11/12 16:56:54 by agroup           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;
	size_t			i;

	pd = (unsigned char*)dst;
	ps = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		pd[i] = ps[i];
		if (pd[i] == (unsigned char)c)
			return ((void*)dst + i + 1);
		i++;
	}
	return (NULL);
}
