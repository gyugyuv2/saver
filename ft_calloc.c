#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (!(p = malloc(count * size)))
		return (NULL);
	ft_bzero(p, count * size);
	return (p);

}

int main()
{
	char *p1;
	char *p2;
	p1 = (char *) calloc(11 ,sizeof(char));
	p2 = (char *) calloc(11 ,sizeof(char));
	p1 = "42seoul-gon";
	p2 = "42seoul-gon";
	printf("calloc : %s\n",p1);
	printf("ft_calloc : %s\n",p2);
}
