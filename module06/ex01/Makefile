# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/29 22:01:11 by gbright           #+#    #+#              #
#    Updated: 2020/09/27 15:49:23 by gbright          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialization

FLAGS = -Wall -Wextra -Werror
FILES = ./main.cpp ./Functions.cpp

OBJ = $(FILES:.cpp=.o)

all: $(NAME)

%o: %cpp
	clang++ -Wall -Wextra -Werror -c -I$(INC) $< -o $(<:.c=.o)

$(NAME): $(OBJ) Header.hpp
	clang++ $(FLAGS) -o $(NAME) $(FILES)

bonus: all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
