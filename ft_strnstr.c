/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agroup <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:40:32 by agroup            #+#    #+#             */
/*   Updated: 2020/11/12 17:15:46 by agroup           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t k;

	i = 0;
	if (s2[0] == '\0')
		return ((char*)s1);
	while (i < n && s1[i])
	{
		k = 0;
		while (i + k < n && s2[k] && s1[i + k] == s2[k])
			k++;
		if (s2[k] == '\0')
			return ((char*)s1 + i);
		i++;
	}
	return (NULL);
}
