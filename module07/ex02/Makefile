# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/29 22:01:11 by gbright           #+#    #+#              #
#    Updated: 2020/09/27 20:50:30 by gbright          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

FLAGS = -Wall -Wextra -Werror
FILES = ./main.cpp

OBJ = $(FILES:.cpp=.o)

all: $(NAME)

%o: %cpp
	clang++ -Wall -Wextra -Werror -c $< -o

$(NAME): $(OBJ) Array.h
	clang++ $(FLAGS) -o $(NAME) $(FILES)

bonus: all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
