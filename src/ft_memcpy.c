#include "../libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;

	if (n == 0 || dst == src)
		return (dst);
	pd = (unsigned char*)dst;
	ps = (unsigned char*)src;
	while (n--)
		*pd++ = *ps++;
	return (dst);
}
