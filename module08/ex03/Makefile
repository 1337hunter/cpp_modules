# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/29 22:01:11 by gbright           #+#    #+#              #
#    Updated: 2021/03/12 10:10:37 by gbright          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program

FLAGS = -Wall -Wextra -Werror
FILES = main.cpp

OBJ = $(FILES:.cpp=.o)

all: $(NAME)

%o: %cpp
	clang++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	clang++ $(FLAGS) -o $(NAME) $(FILES)

bonus: all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
