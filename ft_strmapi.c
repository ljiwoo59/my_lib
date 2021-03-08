#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*arr;
	unsigned int	size;
	unsigned int	i;

	size = ft_strlen(s);
	if (!(arr = (char *)malloc(size + 1)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = (*f)(i, s[i]);
		i++;
	}
	arr[i] = 0;
	return (arr);
}
