#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;
	int	s_len;

	j = 0;
	s_len = ft_strlen(s);
	i = s_len;
	while (i > 0)
	{
		if (s[i] == (char)c)
		{
			j = i;
			return ((char*)s + j);
		}
		i--;
	}
	return (NULL);
}
