SRCS	=	ft_push_swap.c ft_atoi.c ft_operations.c ft_operations2.c ft_operations3.c ft_lstadd_back.c ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_front.c ft_lstclear.c

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

.PHONY:		all clean fclean re
