#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(arr = (char *)malloc(len + 1)))
		return (NULL);
	i = 0;
	if (ft_strlen(s) >= start)
	{
		s += start;
		while (i < len && *s)
		{
			arr[i] = *s;
			i++;
			s++;
		}
	}
	arr[i] = 0;
	return (arr);
}
