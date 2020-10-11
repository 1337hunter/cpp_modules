/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 11:54:19 by gbright           #+#    #+#             */
/*   Updated: 2020/09/09 16:22:53 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

int	main(void)
{
	contact		contact[8];
	std::string	command;
	std::string	index;
	int		iindex;
	int		i;
	int		j;

	i = 0;
	while (1)
	{
		std::cout << ">";
		std::cin >> command;
		if (command.compare("ADD") == 0 && i != 8)
			contact[i++].create();
		else if (command.compare("ADD") == 0 && i == 8)
			std::cout << "Oops! I thought that 640 kilobyte ought to be enough for anyone! :(\n";
		else if (!command.compare("EXIT"))
			return (0);
		else if (!command.compare("SEARCH"))
		{
			j = -1;
			while (++j < i)
				contact[j].print_contact(j + 1);
			std::cout << "Enter en index with listed: ";
			std::cin >> index;
			try
			{
				iindex = std::stoi(index);
				if (iindex > i || iindex < 1)
                                	std::cout << "This is wrong index!!1!1" << std::endl;
                        	else
                                	contact[iindex - 1].print_per_line();
			}
			catch (const std::exception &e)
			{
				std::cout << "Wrong input!\n";
			}
		}
	}
	return (0);
}
