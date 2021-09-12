/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agroup <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 20:49:20 by agroup            #+#    #+#             */
/*   Updated: 2020/11/12 16:52:03 by agroup           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;

	if (n == 0 || dst == src)
		return (dst);
	pd = (unsigned char*)dst;
	ps = (unsigned char*)src;
	while (n--)
		*pd++ = *ps++;
	return (dst);
}
