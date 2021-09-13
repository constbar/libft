#include "../libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;
	size_t			i;

	pd = (unsigned char*)dst;
	ps = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		pd[i] = ps[i];
		if (pd[i] == (unsigned char)c)
			return ((void*)dst + i + 1);
		i++;
	}
	return (NULL);
}
