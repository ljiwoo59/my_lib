#include "libft.h"

static int	ft_count(long long n)
{
	int count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count += 1;
	}
	else if (n == 0)
		return (1);
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	char		*arr;
	long long	nb;
	int			count;
	int			i;

	nb = (long long)n;
	count = ft_count(nb);
	if (nb < 0)
		nb *= -1;
	if (!(arr = (char *)malloc(count + 1)))
		return (NULL);
	i = 0;
	if (n < 0)
		arr[i++] = '-';
	arr[count] = 0;
	while (i < count)
	{
		arr[--count] = (nb % 10) + '0';
		nb /= 10;
	}
	return (arr);
}
