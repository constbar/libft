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
