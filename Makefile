SRCS	=	ft_push_swap.c ft_atoi.c ft_operations.c ft_operations2.c ft_operations3.c ft_lstadd_back.c ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_front.c ft_lstclear.c ft_sort_logic.c ft_sort_logic2.c ft_substr.c ft_strlen.c ft_memcpy.c ft_strdup.c ft_error_handlers.c

OBJS	= $(SRCS:.c=.o)

NAME	=	push_swap

CFLAGS	=	-Wall -Wextra -Werror

CC		=	gcc

RM		=	rm -f

%.o:%.c
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)	
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			
all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

san:		fclean 	
			$(CC) $(CFLAGS) -g3 -fsanitize=address $(SRCS) -o $(NAME)

.PHONY:		all clean fclean re
