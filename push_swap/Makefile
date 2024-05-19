NAME = push_swap

NAME_BONUS = checker

SRCS = mandatory/push_swap.c mandatory/src/ft_atoi.c mandatory/src/ft_split.c mandatory/src/ft_strdup.c mandatory/src/ft_strlcpy.c mandatory/src/ft_strlen.c mandatory/src/ft_substr.c \
		mandatory/src/lstadd_back.c mandatory/src/lstnew.c mandatory/src/lstadd_front.c mandatory/src/lstlast.c \
		mandatory/src/lstsize.c mandatory/sa.c mandatory/sb.c mandatory/ss.c  mandatory/pa.c mandatory/pb.c mandatory/ra.c mandatory/rb.c mandatory/rr.c \
		mandatory/rra.c mandatory/rrb.c mandatory/rrr.c mandatory/test_sort3.c mandatory/indexx.c mandatory/test_sort5.c \
		mandatory/sort_all.c mandatory/error_1.c mandatory/flip_to_a.c
		

SRCS_BONUS = bonus/checker_bonus.c bonus/get_next_line/get_next_line_bonus.c bonus/get_next_line/get_nl_bonus.c \
			bonus/src_bonus/ft_atoi.c bonus/src_bonus/ft_split.c bonus/src_bonus/ft_strdup.c bonus/src_bonus/ft_strlcpy.c \
			bonus/src_bonus/ft_strlen.c bonus/src_bonus/ft_substr.c bonus/src_bonus/lstadd_back.c bonus/src_bonus/lstadd_front.c \
			bonus/src_bonus/lstlast.c bonus/src_bonus/lstnew.c bonus/src_bonus/lstsize.c bonus/error_1.c bonus/src_bonus/lstnew_action.c \
			bonus/src_bonus/ft_strcmp.c bonus/sa.c bonus/sb.c bonus/ss.c  bonus/pa.c bonus/pb.c bonus/ra.c bonus/rb.c bonus/rr.c \
			bonus/rra.c bonus/rrb.c bonus/rrr.c bonus/check_action.c bonus/indexx2.c bonus/ft_lstclear.c bonus/free_mat.c bonus/check_found_action.c

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

bonus: $(NAME_BONUS)

$(OBJS): %.o: %.c mandatory/push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_BONUS): %.o: %.c bonus/push_swap_bonus.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(NAME_BONUS): $(OBJS_BONUS)
	$(CC) $(CFLAGS) $(OBJS_BONUS) -o $(NAME_BONUS)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)

re : fclean all
