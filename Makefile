NAME = rpg

SRCS = engine/*.c	\
	   main.c		\

SRCO = *.o

LIB = engine/Libft/libft.a

GREEN = "\033[32m"

WHITE = "\033[00m"

all: $(NAME) clean

$(NAME): $(SRCO)
	@gcc -o $(NAME) $(SRCO) $(LIB)
	@echo $(GREEN)"Program Created"$(WHITE)

$(SRCO):
	@gcc -c -I./engine/ $(SRCS)
	@echo "Compiling Sources"

clean:
	@rm -rf $(SRCO)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
