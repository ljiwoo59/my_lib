#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str;
	char *buf;

	str = (char *)s;
	buf = 0;
	while (*str)
	{
		if (*str == (char)c)
			buf = str;
		str++;
	}
	if (*str == (char)c)
		buf = str;
	return (buf);
}
