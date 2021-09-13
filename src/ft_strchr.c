#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *p;

	p = (char*)s;
	while (*p && *p != c)
		p++;
	if (*p == c)
		return (p);
	else
		return (NULL);
}
