FLAG = -Wall -Wextra -Werror

all :name

name:
	make -C libft/ fclean && make -C libft/
	clang  $(FLAG) -I libft/includes -o get_next_line.o -c get_next_line.c
	clang  $(FLAG) -I libft/includes -o main.o -c main.c
	clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft

clean:
	rm -f *.o

fclean: clean
	rm -f test_gnl

re: fclean all
