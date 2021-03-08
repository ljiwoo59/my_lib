#include "libft.h"

char	*ft_strnstr(const char *str, const char *word, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	if (*word == '\0')
		return ((char *)str);
	i = 0;
	while (i < len && str[i])
	{
		j = 0;
		if (str[i] == word[j])
			ptr = (char *)(str + i);
		while (str[i + j] == word[j] && word[j] && i + j < len)
			j++;
		if (word[j] == '\0')
			return (ptr);
		i++;
	}
	return (NULL);
}
