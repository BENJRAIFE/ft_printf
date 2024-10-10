NAME = libftprintf.a
CC = cc 
CFLAGS = -Wall -Wextra -Werror
FUN = ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putnbr_base.c \
		ft_putstring.c \
		ft_putnbr_unsigned.c \
		ft_putnbr_add.c

OBJ = $(FUN:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)


clean:
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)
	
re:fclean all