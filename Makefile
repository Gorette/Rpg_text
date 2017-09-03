NAME = rpg

SRCS = engine/*.c	\
	   main.c		\

SRCO = *.o

all: $(NAME)

$(NAME):
	gcc -c -I./engine/ $(SRCS)
	gcc -o $(NAME) $(SRCO)

clean:
	rm -rf $(SRCO)

fclean: clean
	rm -rf $(NAME)

re: fclean all
