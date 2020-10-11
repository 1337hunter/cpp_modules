# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/29 22:01:11 by gbright           #+#    #+#              #
#    Updated: 2020/09/16 17:36:41 by gbright          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = myboss

FLAGS = -Wall -Wextra -Werror
FILES = tests.cpp Account.class.cpp

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
