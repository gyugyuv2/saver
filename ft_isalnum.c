#include "libft.h"

int ft_isalnum(int c)
{
	return ((ft_isupper(c) || ft_islower(c)) || ft_isdigit(c));
}

int main(void)
{
    char str[] = "42seoul-gon";

    for (int i = 0; i < (int)strlen(str); ++i)
    {
        printf("isalnum(\'%c\') : %d, ft_isalnum(\'%c\') : %d\n", str[i], isalnum(str[i]), str[i], ft_isalnum(str[i]));
    }
}
