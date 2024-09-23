NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
      ft_isprint.c ft_memcmp.c ft_strchr.c ft_strlen.c \
      ft_strncmp.c ft_tolower.c ft_toupper.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
