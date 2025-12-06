BIN_PATH = bin/

SRC = src/main.c \
	  src/lists.c \
	  src/pars.c \
	  src/threds.c \
	  src/utils.c

OBJ = $(SRC:src/%.c=$(BIN_PATH)%.o)

NAME = tlist

CC = gcc
CFLAGS = -Wall -Werror -Wextra -O3

all:$(NAME)

$(NAME) : objs $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

objs:
	@mkdir -p $(BIN_PATH)

$(BIN_PATH)%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(BIN_PATH)*.o

fclean: clean
	rm -f $(NAME)
	rm -rf $(BIN_PATH)

re: fclean all

.PHONY: all clean fclean re