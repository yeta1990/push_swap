SRCS	=	srcs/ft_push_swap.c srcs/ft_atoi.c srcs/ft_operations.c srcs/ft_operations2.c srcs/ft_operations3.c srcs/ft_lstadd_back.c srcs/ft_lstnew.c srcs/ft_lstsize.c srcs/ft_lstlast.c srcs/ft_lstadd_front.c srcs/ft_lstclear.c srcs/ft_sort_logic.c srcs/ft_sort_logic2.c srcs/ft_substr.c srcs/ft_strlen.c srcs/ft_memcpy.c srcs/ft_strdup.c srcs/ft_error_handlers.c

OBJS	= $(SRCS:.c=.o)

NAME	=	push_swap

CFLAGS	=	-Wall -Wextra -Werror

CC		=	gcc

RM		=	rm -f

INC		= ./inc

%.o:%.c
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I$(INC)

$(NAME):	$(OBJS)	
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			
all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

san:		fclean 	
			$(CC) $(CFLAGS) -g3 -fsanitize=address $(SRCS) -o $(NAME) -I$(INC)

.PHONY:		all clean fclean re
