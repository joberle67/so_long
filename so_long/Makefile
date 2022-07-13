CC = gcc
CFLAGS = -Wall -Werror -Wextra 

SRC =  main.c \
		src/erroc.c \
		src/exit_game.c \
		src/find.c \
		src/img.c \
		src/init_tab.c \
		src/move.c \
OBJ = $(SRC:.c=.o)
NAME = so_long

all: $(NAME)


LIBFT: cd libft/ && make re

$(NAME): $(OBJ)
	$(LIBFT) $(CC) $(CFLAGS) $(OBJ) libft/libft.a -o $(NAME)

clean:
	rm -rf $(OBJ) $(EXEC)