#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t total;

	total = ft_strlen(src);
	if (dstsize == 0)
		return (total);
	while (dstsize - 1 > 0 && *src)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = 0;
	return (total);
}
