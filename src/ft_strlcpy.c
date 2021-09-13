#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	i;

	lensrc = 0;
	i = 0;
	if (dst == 0)
		return (0);
	while (src[lensrc])
		lensrc++;
	if (dstsize == 0)
		return (lensrc);
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lensrc);
}
