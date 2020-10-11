/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 22:53:20 by gbright           #+#    #+#             */
/*   Updated: 2020/09/12 19:16:32 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int	main(int ac, char **av)
{
	std::string	line;
	std::string	red;
	std::fstream	file;
	size_t		pos;

	if (ac < 4 || ac > 4)
	{
		std::cout << "Arg error\n";
		return 0;
	}
	file.open(av[1], std::ios::in);
	if (!file.is_open())
	{
		std::cout << "File error\n";
		return 0;
	}
	red = "";
	while (!file.eof())
	{
		getline(file, line);
		pos = line.find(av[2], 0);
		while (pos != std::string::npos)
		{
			line.replace(pos, strlen(av[2]), av[3]);
			pos += strlen(av[3]);
			pos = line.find(av[2], pos);
		}
		red = red + line;
		if (!file.eof())
			red += "\n";
	}
	file.close();
	file.open(av[1], std::ios::out | std::ofstream::trunc);
	file << red;
	file.close();
}
