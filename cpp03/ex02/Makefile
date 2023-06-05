# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smessal <smessal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/25 13:21:32 by smessal           #+#    #+#              #
#    Updated: 2023/06/05 22:30:27 by smessal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	FragTrap

SRC			=	main.cpp ClapTrap.cpp FragTrap.cpp

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	c++

FLAGS		=	-Wall -Wextra -Werror -g3 -std=c++98

EXE_NAME	=	-o FragTrap

EXEC		=	FragTrap


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