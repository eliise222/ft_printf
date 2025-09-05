NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
INCLUDES = -Iincludes -I$(LIBFT_DIR)

SRC	=	srcs/ft_print_c.c srcs/ft_print_i_or_d.c \
		srcs/ft_print_p.c srcs/ft_print_percent.c \
		srcs/ft_print_s.c srcs/ft_print_u.c srcs/ft_print_x.c \
		srcs/ft_print_xx.c srcs/ft_printf.c \

OBJ = $(SRC:.c=.o)


all: $(NAME)


$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@


$(LIBFT):
	make -C $(LIBFT_DIR)


clean:
	$(RM) $(OBJ)
	make fclean -C $(LIBFT_DIR)


fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_DIR)


re: fclean all

.PHONY: all clean fclean re