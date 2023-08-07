# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smessal <smessal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/07 16:32:35 by smessal           #+#    #+#              #
#    Updated: 2023/08/07 16:33:00 by smessal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC      := main.cpp PMergeMe.cpp

OBJS     := $(SRC:.cpp=.o)

COMPILE  := c++

FLAGS    := -Wall -Wextra -Werror -g3 -std=c++98

EXE_NAME := PMergeMe

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