# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/27 16:24:04 by gcozigon          #+#    #+#              #
#    Updated: 2024/03/11 17:54:39 by gcozigon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME 		= PmergeMe

SRC_FILES	=	main.cpp \
				PmergeMe.cpp \

OBJS_DIR	= .objets

OBJS		= $(SRC_FILES:%.cpp=$(OBJS_DIR)/%.o)

CC			= c++

CFLAGS		= -g3 -std=c++98 -Wall -Wextra -Werror -Iincludes

all : $(NAME)

$(NAME) : $(OBJS_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	
$(OBJS_DIR) :
	@mkdir $(OBJS_DIR)
	@mkdir $(OBJS_DIR)/srcs

$(OBJS) : $(OBJS_DIR)/%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -rf $(NAME)
	
re : fclean all

.PHONY: all clean fclean re