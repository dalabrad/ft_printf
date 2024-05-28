NAME = libftprintf.a
SRCS_DIR = .
SRCS =	$(wildcard $(SRCS_DIR)/ft*.c) 						
OBJS = $(SRCS:.c=.o)

CC				= cc
CFLAGS			= -Wall -Wextra -Werror
RM				= rm -f

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

%.o: %.c
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re