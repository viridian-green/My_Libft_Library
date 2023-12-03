
#include <stdio.h>
#include "libft.h"

int	size_of_int(long n)
{
	size_t	count;

	count = 0;
	if (n < 0)
		count++;
		n = -n;
	if (n == 0)
	{
		count++;
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	int_len;
	size_t	i;
	long nbr;

	nbr = n;
	int_len = size_of_int(nbr);
	i = int_len - 1;
	result = (char *)malloc(sizeof(char) * (int_len + 1));
	if (!result)
		return (NULL);
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		result[i] = ((nbr % 10) + 48);
	while (nbr != 0)
	{
		result[i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		i--;
	}
	result[int_len] = '\0';
	return (result);
}


int main()
{
char *result = ft_itoa(-2147483648LL);
printf("%s", result);
}

