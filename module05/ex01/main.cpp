/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 12:33:32 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 21:10:14 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	{
		Bureaucrat	*me = new Bureaucrat("Me", 75);
		std::cout << *me;
		Bureaucrat	*you = new Bureaucrat("You", 1);
		std::cout << *you;
		Form		*tosign = new Form("SIGN IT FAST", 50, 50);
		std::cout << *tosign;
		me->signForm(*tosign);
		you->signForm(*tosign);
		delete me;
		delete you;
	}
	{
		try
		{
			Form            *tosign = new Form("SIGN IT FAST", 151, 50);
			std::cout << tosign;
			delete tosign;
		}
		catch (std::exception &e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
		try
                {
                        Form            *tosign = new Form("SIGN IT FAST", 1, 500);
                        std::cout << tosign;
                        delete tosign;
                }
		catch (std::exception &e)
                {
                        std::cerr << "Error: " << e.what() << std::endl;
                }
	}
}
