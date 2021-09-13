#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *p;

	p = (char*)s;
	while (*p)
		p++;
	while (p >= s)
	{
		if (*p == c)
			return (p);
		p--;
	}
	return (NULL);
}
