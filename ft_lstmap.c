/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agroup <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:36:34 by agroup            #+#    #+#             */
/*   Updated: 2020/11/12 17:15:45 by agroup           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *l, void *(*f)(void *), void (*del)(void *))
{
	t_list *p;
	t_list *tmp;
	t_list *new;

	p = NULL;
	if (!l || !(*f))
		return (p);
	tmp = l;
	p = ft_lstnew(f(tmp->content));
	if (!p)
		return (NULL);
	tmp = tmp->next;
	while (tmp)
	{
		if (!(new = ft_lstnew(f(tmp->content))))
		{
			ft_lstclear(&p, del);
			p = NULL;
			return (p);
		}
		ft_lstadd_back(&p, new);
		tmp = tmp->next;
	}
	return (p);
}
