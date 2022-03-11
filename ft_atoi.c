#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nbr;
	int	n;
	size_t	i;

	nbr = 0;
	n = 1;
	i = 0;
	while (str[i] && str[i] <= ' ')
		i++;
	if (str[i] == '-')
		n = -1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (str[i] && ('0' <= str[i]) && (str[i] <= '9'))
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return (n * nbr);
}
