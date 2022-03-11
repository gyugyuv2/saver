NAME = libft.a

CC = gcc
CFLAG = -Wall -Wextra -Werror
RM = rm -rf
AR = ar crs

INCLUDES = ./libft.h

SRCS = // c 파일들

OBJS = $(SRCS:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

$(NAME) : $(OBJS)
	    $(AR) $@ $^

.PHONY : all clean fclean re
