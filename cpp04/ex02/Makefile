# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smessal <smessal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/22 16:51:05 by smessal           #+#    #+#              #
#    Updated: 2023/04/22 16:55:13 by smessal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	AAnimal

SRC			=	Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp \
				Brain.cpp main.cpp \

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	g++

FLAGS		=	-Wall -Wextra -Werror -g3 -std=c++98

EXE_NAME	=	-o AAnimal

EXEC		=	AAnimal


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