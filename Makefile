SRCS	=	ft_push_swap.c ft_atoi.c ft_operations.c ft_operations2.c ft_operations3.c ft_lstadd_back.c ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_front.c ft_lstclear.c ft_putnbr_base.c

NAME	=	push_swap

CFLAGS	=	-Wall -Wextra -Werror

CC		=	gcc

RM		=	rm -f

%.o:%.c
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	
			$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
			
all:		$(NAME)

clean:
			$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

san:		fclean 	
			$(CC) $(CFLAGS) -g3 -fsanitize=address $(SRCS) -o $(NAME)

.PHONY:		all clean fclean re
