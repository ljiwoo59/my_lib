#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	if (dst > src)
	{
		while (i < len)
		{
			((unsigned char *)dst)[len - i - 1] =
			((unsigned char *)src)[len - i - 1];
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
