SRCS =	operations/push.c			\
		operations/rotate.c 		\
		operations/swap.c			\
		sorting/tiny_sort.c			\
		sorting/chunk_sort.c		\
		sorting/selection_sort.c 	\
		utils/init_utils.c 			\
		utils/sort_utils.c 			\
		utils/utils_2.c				\
		ft_error.c					\
		ft_init.c					\
		main.c						\

OBG = $(SRCS:.c=.o)

NAME = push_swap

FLAGS = -Wall -Wextra -Werror -g

I = -I ./includes/

all : $(NAME)

$(NAME) : $(OBG)
	cc $(OBG) -o $@

$(OBG) : %.o : %.c
	cc -c $(FLAGS) $(I) $^ -o $@

clean:
	rm -f $(OBG)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean