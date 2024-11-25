NAME = Libftprintf.a

SRC = ft_putchar.c\
	ft_putstr.c\
	ft_puthex.c\
	ft_putnbr.c\
	ft_putunsign.c\
	ft_putadress.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME): $(OBJ)
	cc $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean:
	rm -f $(NAME)
re: fclean all