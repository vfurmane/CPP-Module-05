# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 12:04:50 by vfurmane          #+#    #+#              #
#    Updated: 2021/12/23 13:59:01 by vfurmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= a.out
SRCS		= Bureaucrat.cpp main.cpp
HEAD		= Bureaucrat.hpp
OBJS		= $(SRCS:.cpp=.o)
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -f

%.o:		%.cpp $(HEAD)
			$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $^ -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
