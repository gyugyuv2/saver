#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		i = len;
		while (i)
		{
			((unsigned char *)dst)[i - 1] = ((unsigned char *)src)[i - 1];
			i--;
		}
	}
	return (dst);
}

int main()
{
	int dest[25];
	int dest_1[25];

	for (int i = 0; i < 20; i++)
		dest[i] = i + 1;
	ft_memcpy(dest + 3, dest + 1, sizeof(int) * 17);
	for (int i = 0; i < 20; i++)
		printf("%d ", dest[i]);
	printf("\n");

	for (int i = 0; i < 20; i++)
		dest_1[i] = i + 1;
	ft_memmove(dest_1 + 3, dest_1 + 1, sizeof(int) * 17);
	for (int i = 0; i < 20; i++)
		printf("%d ", dest_1[i]);
	printf("\n");
}
