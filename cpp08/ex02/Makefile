# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smessal <smessal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 14:22:51 by smessal           #+#    #+#              #
#    Updated: 2023/08/03 14:23:01 by smessal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC      := main.cpp

OBJS     := $(SRC:.cpp=.o)

COMPILE  := c++

FLAGS    := -Wall -Wextra -Werror -g3 -std=c++98

EXE_NAME := Mutant

EXEC     := ./$(EXE_NAME)

.PHONY: all clean fclean re

all: $(EXE_NAME)

$(EXE_NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) -o $(EXE_NAME)

.cpp.o:
	$(COMPILE) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXE_NAME)

re: fclean all