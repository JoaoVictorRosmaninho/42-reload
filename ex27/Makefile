NAME = ft_display_file

SRCS = ./*.c

OBJECTS = ./*.o

HEADER = ./*.h.gch

INCLUDE = ./*.h

GCC = gcc -Wall -Werror -Wextra

all : $(NAME)

$(NAME) :
	$(GCC) -c $(SRCS) $(INCLUDE)
	$(GCC) $(OBJECTS) -o $(NAME)

clean :
	/bin/rm -Rf $(OBJECTS) $(HEADER)

fclean : clean
	/bin/rm -Rf $(NAME)

re : fclean all