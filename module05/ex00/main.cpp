/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 12:33:32 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 15:23:50 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	try
	{
		Bureaucrat *who = new Bureaucrat("You", 0);
		std::cout << "This string will never be printed!" << std::endl;
		std::cout << who->getGrade() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exeption: " << e.what() << std::endl;
	}
	try
        {
                Bureaucrat *who = new Bureaucrat("You", 100500);
                std::cout << "This string will never be printed!" << std::endl;
                std::cout << who->getGrade() << std::endl;
        }
        catch (std::exception &e)
        {
                std::cerr << "Exeption: " << e.what() << std::endl;
        }
	Bureaucrat *who = new Bureaucrat("You", 1);
	std::cout << *who;
	try
	{
		who->incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << "Exeption: " << e.what() << std::endl;
	}
	who->decrementGrade();
	std::cout << *who;
	who->incrementGrade();
	std::cout << *who;
	delete who;

	Bureaucrat	*me = new Bureaucrat("Me", 150);
	std::cout << *me;
	try
	{
		me->decrementGrade();
		std::cout << "This string will never be printed!" << std::endl;
		std::cout << who->getGrade() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exeption: " << e.what() << std::endl;
	}
}
