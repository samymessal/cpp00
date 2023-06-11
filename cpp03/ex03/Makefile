# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smessal <smessal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 15:39:26 by smessal           #+#    #+#              #
#    Updated: 2023/06/11 16:17:28 by smessal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	DiamondTrap

SRC			=	ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp main.cpp 

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	g++

FLAGS		=	-Wall -Wextra -Werror -g3 -std=c++98

EXE_NAME	=	-o DiamondTrap

EXEC		=	DiamondTrap


all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	
re:	fclean all