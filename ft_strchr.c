#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			j = i;
			return ((char*)s + j);
		}
		i++;
	}
	return (NULL);
}
