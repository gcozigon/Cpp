# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 16:21:07 by gcozigon          #+#    #+#              #
#    Updated: 2023/11/20 20:10:35 by gcozigon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	MegaPhone

COMPILER	=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	./megaphone.cpp

OBJS	=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		$(COMPILER) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re