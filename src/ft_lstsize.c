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
