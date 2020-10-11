/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 11:47:44 by gbright           #+#    #+#             */
/*   Updated: 2020/09/26 15:32:13 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Header.hpp"
#include <iostream>

void	*serialize(void)
{
	char	*what = new char[20];
	int		i;

	std::cout << "serrialize fuction: \n";
	srand(time(0) + 69);
	i = -1;
	while (++i < 8)
	{
		if (rand() % 2)
			what[i] = 48 + (rand() % 10);
		else if (rand() % 3)
			what[i] = 65 + (rand() % 26);
		else
			what[i] = 97 + (rand() % 26);
		std::cout << what[i];
	}
	std::cout << std::endl;
	what[i++] = rand();
	what[i++] = rand();
	what[i++] = rand();
	what[i] = rand();
	while (++i < 20)
        {
                if (rand() % 2)
                        what[i] = 48 + (rand() % 10);
                else if (rand() % 3)
                        what[i] = 65 + (rand() % 26);
                else
                        what[i] = 97 + (rand() % 26);
		std::cout << what[i];
        }
	std::cout << std::endl;
	return static_cast<void*>(what);
}

Data	*deserialize(void *raw)
{
	struct Data	*what = new struct Data;

	char	*bits = static_cast<char*>(raw);
	int	i = -1;
	while (++i < 8)
		what->s1 += *(bits + i);
	what->n = 0;
	what->n += static_cast<int>(bits[i++]);
	what->n = what->n << 24;
	what->n += static_cast<int>(bits[i++]) << 16;
	what->n += static_cast<int>(bits[i++]) << 8;
	what->n += static_cast<int>(bits[i]);
	while (++i < 20)
                what->s2 += *(bits + i);
	return what;
}
