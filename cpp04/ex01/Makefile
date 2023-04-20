# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smessal <smessal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 18:25:28 by smessal           #+#    #+#              #
#    Updated: 2023/04/20 18:25:29 by smessal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Animal

SRC			=	Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp main.cpp 

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	g++

FLAGS		=	-Wall -Wextra -Werror -g3 -std=c++98

EXE_NAME	=	-o Animal

EXEC		=	Animal


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