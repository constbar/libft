/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agroup <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:57:35 by agroup            #+#    #+#             */
/*   Updated: 2020/11/12 17:04:30 by agroup           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst && del)
	{
		temp = *lst;
		while (temp != NULL)
		{
			*lst = temp->next;
			ft_lstdelone(temp, del);
			temp = *lst;
		}
		lst = NULL;
	}
}
