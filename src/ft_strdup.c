#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	l;
	size_t	i;
	char	*new;

	l = 0;
	i = 0;
	while (s[l])
		l++;
	new = (char*)malloc(l * sizeof(char) + 1);
	if (!new)
		return (NULL);
	while (i < l)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
