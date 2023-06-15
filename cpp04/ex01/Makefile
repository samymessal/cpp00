# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smessal <smessal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 18:25:28 by smessal           #+#    #+#              #
#    Updated: 2023/06/13 12:23:53 by smessal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	BrainedAnimal

SRC			=	Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp \
				Brain.cpp main.cpp \

OBJS		=	$(SRC:.cpp=.o)

COMPILE		=	c++

FLAGS		=	-Wall -Wextra -Werror -g3 -std=c++98

EXE_NAME	=	-o BrainedAnimal

EXEC		=	BrainedAnimal


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