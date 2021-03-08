#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	int		i;
	size_t	j;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	j = dstlen;
	while (src[i] && (i < (int)(dstsize - dstlen - 1)))
		dst[j++] = src[i++];
	dst[j] = 0;
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	else
		return (srclen + dstlen);
}
