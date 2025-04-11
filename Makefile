SRCS =	operations/push.c			\
		operations/rotate.c 		\
		operations/swap.c			\
		sorting/tiny_sort.c			\
		sorting/chunk_sort.c		\
		sorting/sortfive.c			\
		sorting/selection_sort.c 	\
		utils/init_utils.c 			\
		utils/sort_utils.c 			\
		utils/utils_2.c				\
		utils/utils_3.c				\
		ft_init.c					\
		ft_exit.c					\
		main.c						\

OBG = $(SRCS:.c=.o)

NAME = push_swap

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBG)
	cc $(OBG) -o $@

%.o : %.c includes/push_swap.h
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBG)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean 