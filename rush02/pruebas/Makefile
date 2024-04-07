
NAME = rush-02

CC = cc 

CFLAGS = -Wall -Werror -Wextra 

RM = rm -f

SRC = atoi.c errors.c main.c rush-02.c split.c write_numbers.c write_numbers2.c

OBJS = $(SRC:.c=.o)

all: $(NAME) 
	
$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)


clean:
	$(RM) $(OBJS)

fclean: clean 
	$(RM) $(NAME)

re: fclean all

.PHONY : clean fclean all re

