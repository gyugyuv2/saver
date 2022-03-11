#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		return (src_len);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

int main()
{
	char *dest = "42seoul-gon";
	char dest_1[20];
	char dest_2[20];

	printf("dest_1 : %s, size_return : %zu\n", dest_1, strlcpy(dest_1, dest, 15));

	printf("dest_2 : %s, size_return : %zu\n",	dest_2, ft_strlcpy(dest_2, dest, 15));
}
