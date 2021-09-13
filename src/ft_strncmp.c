#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	i = 0;
	if (n == 0)
		return (0);
	ps1 = (unsigned char*)s1;
	ps2 = (unsigned char*)s2;
	while (ps1[i] && ps2[i] && i < (n - 1))
	{
		if (ps1[i] != ps2[i])
			break ;
		i++;
	}
	return (ps1[i] - ps2[i]);
}
