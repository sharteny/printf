
NAME = libftprintf.a

LIBFT = libft/libft.a

CC = cc
FLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_print_pointer.c ft_print_hex.c ft_print_unsigned.c ft_print_int.c ft_print_char.c ft_print_str.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) 
	$(MAKE) -C ./libft
	cp ${LIBFT} $(NAME)
	ar rcs $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
