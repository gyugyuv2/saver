#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*copy;

	i = 0;
	j = 0;
	copy = (char *)malloc(sizeof(*s) * (len + 1));
	if (!copy)
		return (NULL);
	while (s[i])
	{
		if (i > start && j < len)
		{
			copy[j] = s[i];
			j++;
		}
		i++;
	}
	copy[j] = '\0';
	return (copy);
}
