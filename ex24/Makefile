NAME = libft.a
FLAG = -Wall -Wextra -Werror
FILES =	srcs/*.c
OBJ = *.o

ALL: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(FILES)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean ALL