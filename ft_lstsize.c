/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agroup <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:57:09 by agroup            #+#    #+#             */
/*   Updated: 2020/11/12 16:57:21 by agroup           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*new;

	i = 0;
	new = lst;
	if (new == NULL)
		return (0);
	while (new != NULL)
	{
		i++;
		new = new->next;
	}
	return (i);
}
