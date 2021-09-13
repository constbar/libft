#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pd;
	unsigned char	*ps;
	size_t			i;

	pd = (unsigned char*)dst;
	ps = (unsigned char*)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (pd < ps)
	{
		while (i < len)
		{
			pd[i] = ps[i];
			i++;
		}
	}
	else
	{
		while (len--)
			pd[len] = ps[len];
	}
	return (dst);
}
