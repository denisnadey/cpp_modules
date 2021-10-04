SRCS			= Contact.cpp trim.cpp Phonebook.cpp main.cpp
OBJS			= $(SRCS:.cpp=.o)

CC				= clang++
RM				= rm -f
CCFLAGS		= -g -Wall -Wextra -Werror -I.

NAME			= crappy_phonebook

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CCFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re test
