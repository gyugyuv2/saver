#include <stdio.h>
#include <unistd.h>

int main(int ac, char *av[])
{
	int cnt = 0;
	printf("hello, world\n");
	while (1)
	{
		usleep(1000000);
		printf("loop count : %d\n", ++cnt);
	}
	return 0;
}
