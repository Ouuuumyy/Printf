NAME = libftprintf.a

SRC = ft_putchar.c\
	ft_putstr.c\
	ft_puthex.c\
	ft_putnbr.c\
	ft_putunsign.c\
	ft_putadress.c

OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean:
	rm -f $(NAME)
re: fclean all