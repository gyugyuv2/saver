#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*save;
	int	i;
	int	j;

	save = (char *)malloc(sizeof(s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!save)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		save[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		save[j++] = s2[i];
		i++;
	}
	save[j] = '\0';
	return (save);
}
