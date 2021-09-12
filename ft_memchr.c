/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agroup <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:55:13 by agroup            #+#    #+#             */
/*   Updated: 2020/11/12 16:55:50 by agroup           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p;

	p = (unsigned char*)s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((void*)p);
		p++;
	}
	return (NULL);
}
