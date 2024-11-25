SRCS = ft_printf.c ft_putstr.c ft_putchar.c ft_putnbr.c ft_putnbr_base.c ft_putnbr_u.c ft_put_address.c

OBJS = $(SRCS:.c=.o)

CC = cc

HEADER = ft_printf.h

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean
