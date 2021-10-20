SRCS	=	srcs/ft_push_swap.c srcs/ft_atoi.c srcs/ft_operations.c srcs/ft_operations2.c srcs/ft_operations3.c srcs/ft_lstadd_back.c srcs/ft_lstnew.c srcs/ft_lstsize.c srcs/ft_lstlast.c srcs/ft_lstadd_front.c srcs/ft_lstclear.c srcs/ft_sort_logic.c srcs/ft_sort_logic2.c srcs/ft_substr.c srcs/ft_strlen.c srcs/ft_memcpy.c srcs/ft_strdup.c srcs/ft_error_handlers.c

SRCS_BONUS = srcs_bonus/ft_push_swap_bonus.c srcs_bonus/ft_sort_logic_bonus.c srcs_bonus/ft_atoi.c srcs_bonus/ft_operations.c srcs_bonus/ft_operations2.c srcs_bonus/ft_operations3.c srcs_bonus/ft_lstadd_back.c srcs_bonus/ft_lstnew.c srcs_bonus/ft_lstsize.c srcs_bonus/ft_lstlast.c srcs_bonus/ft_lstadd_front.c srcs_bonus/ft_lstclear.c srcs_bonus/get_next_line.c srcs_bonus/get_next_line_utils.c srcs_bonus/ft_substr.c srcs_bonus/ft_strlen.c srcs_bonus/ft_memcpy.c srcs_bonus/ft_strdup.c srcs_bonus/ft_error_handlers.c srcs_bonus/ft_memcmp.c


OBJS	= $(SRCS:.c=.o)

OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

NAME	=	push_swap

BONUS_NAME = checker

CFLAGS	=	-Wall -Wextra -Werror

CC		=	gcc

RM		=	rm -f

INC		= ./inc

%.o:%.c
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I$(INC)

$(NAME):	$(OBJS)	
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(BONUS_NAME):	$(OBJS_BONUS)
				$(CC) $(CFLAGS) $(OBJS_BONUS) -o $(BONUS_NAME)
	

all:		$(NAME)

bonus:		$(BONUS_NAME)

clean:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			$(RM) $(NAME) $(BONUS_NAME)

re:			fclean all

san:		fclean 	
			$(CC) $(CFLAGS) -g3 -fsanitize=address $(SRCS) -o $(NAME) -I$(INC)

.PHONY:		all clean fclean re bonus
