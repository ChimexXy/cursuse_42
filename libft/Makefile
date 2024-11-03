CC = cc
CFLAGS = -Wall -Wextra -Werror
Ar= ar rc
SRC = main.c ft_strlcat.c 
OBJ = $(SRC:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
    $(AR) $(NAME) $(OBJ)

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -rf $(OBJ)

fclean: clean
    rm -rf $(NAME)

re: fclean all