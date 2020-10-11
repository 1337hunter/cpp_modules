/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 20:18:56 by gbright           #+#    #+#             */
/*   Updated: 2020/10/04 22:40:12 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <cstring>

#define RESET   "\033[0m"
#define RED     "\033[31m" 
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

void	check_file(std::fstream &file)
{
	std::string	line;
	size_t		pos;
	int		flag;

	flag = 0;
	while (!file.eof())
	{
		getline(file, line);
		pos = line.find_first_not_of("><+-.,[]\n");
		if (pos != std::string::npos)
		{
			std::cout << RED << "Compilation error\n" << RESET;
			std::cout << CYAN << line << RESET << '\n';
			size_t i = -1;
			while (++i < pos)
				std::cout << ' ';
			std::cout << MAGENTA << '^' << RESET;
			std::cout << std::endl;
			flag = 1;
		}
	}
	if (flag)
		exit(1);
}	

void	push_commands(std::fstream &file, std::vector<char> &commands)
{
	std::string	line;
	std::string::iterator it;
	std::string::iterator ite;

	while (!file.eof())
	{
		getline(file, line);
		it = line.begin();
		ite = line.end();
		while (it < ite)
		{
			commands.push_back(*it);
			it++;
		}
	}
}

void	exec_what(std::vector<char>::iterator &its, char *mem, int &i)
{
	if (*its == '>')
		i++;
	else if (*its == '<')
		i--;
	else if (*its == '+')
		mem[i]++;
	else if (*its == '-')
		mem[i]--;
	else if (*its == '.')
		std::cout << mem[i];
	else if (*its == ',')
		std::cin >> mem[i];
	its++;
}

void	exec_commands(std::vector<char> &commands)
{
	std::vector<char>::iterator	its;
	std::vector<char>::iterator     ite;
	char				mem[30000];
	int				i;

	memset(mem, 0, 30000);
	its = commands.begin();
	ite = commands.end();
	i = 0;
	while (its < ite)
	{
		if (*its != '[' && *its != ']')
			exec_what(its, mem, i);
		else if (*its == '[')
		{
			while (mem[i])
			{
				int j = 0;
				while (*its != ']')
				{
					exec_what(its, mem, i);
					j++;
				}
				if (mem[i])
					its -= j;
			}
			its++;
		}
	}

}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Arg error\n";
		return	1;
	}
	std::fstream	file;
	file.open(av[1], std::ios::in);
	if (!file.is_open())
	{
		std::cout << "Arg error\n";
		return  1;
        }
	check_file(file);
	file.close();
	file.open(av[1], std::ios::in);
	std::vector<char>	commands;
	push_commands(file, commands);
	exec_commands(commands);
}
