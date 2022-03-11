#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <memory.h>

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

size_t	ft_strlen(const char *s);
int	ft_isupper(int c);
int	ft_islower(int c);
int	ft_isdigit(int c);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	ft_bzero(void *s, size_t n);

#endif
