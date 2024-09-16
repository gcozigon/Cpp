# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/13 20:10:39 by gcozigon          #+#    #+#              #
#    Updated: 2024/01/18 18:40:36 by gcozigon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= Materia

SRC_FILES	=	$(addprefix srcs/, Amateria.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp) \
				main.cpp \

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