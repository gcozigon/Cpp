# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 16:21:07 by gcozigon          #+#    #+#              #
#    Updated: 2023/12/20 03:08:02 by gcozigon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	HarlFilter

COMPILER	=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp\
			HarlFilter.cpp\

OBJS	=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		$(COMPILER) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
		$(COMPILER) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS)

fclean:		clean
		rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
