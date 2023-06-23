# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smessal <smessal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/23 20:51:20 by smessal           #+#    #+#              #
#    Updated: 2023/06/23 20:51:22 by smessal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Bureaucrat4

SRC_DIR 	= 	src

SRC			=	$(wildcard $(SRC_DIR)/*.cpp)

OBJS		=	$(SRC:.cpp=.o)

INCLUDES	=  -Iinc

COMPILE		=	c++

FLAGS		=	-Wall -Wextra -Werror -g3 -std=c++98

EXE_NAME	=	-o Bureaucrat4

EXEC		=	Bureaucrat4


all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(INCLUDES) $(OBJS) $(EXE_NAME)

.cpp.o:
	${COMPILE} ${FLAGS} $(INCLUDES) -c $< -o ${<:.cpp=.o}

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all