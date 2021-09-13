#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*p;

	if (s && start >= ft_strlen(s))
		len = 0;
	p = (char *)malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len && s)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
