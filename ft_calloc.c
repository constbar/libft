/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agroup <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 22:32:58 by agroup            #+#    #+#             */
/*   Updated: 2020/11/12 17:06:30 by agroup           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void *p;

	p = (void*)malloc(n * size);
	if (!p)
		return (NULL);
	ft_bzero(p, size * n);
	return (p);
}
