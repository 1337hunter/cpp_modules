/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 12:33:32 by gbright           #+#    #+#             */
/*   Updated: 2020/09/27 14:37:02 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

int	main(void)
{
	srand(time(0));

	Bureaucrat	*v = new Bureaucrat("Vasya", 145);
	ShrubberyCreationForm *f = new ShrubberyCreationForm("form");
	std::cout << "\n-------------ShrubberyCreationForm------------\n";
	std::cout << *f;
	v->signForm(*f);
	try
	{
		f->execute(*v);
	}
	catch (std::exception &e)
	{
		std::cout << "Execution error: " << e.what() << '\n';
	}
	Bureaucrat      *zb = new Bureaucrat("Zafod Beeblebrox", 1);
	try
        {
                zb->signForm(*f);
                f->execute(*zb);
		zb->executeForm(*f);
        }
        catch (std::exception &e)
        {
                std::cout << "Error: " << e.what() << '\n';
        }
	delete f;
	std::cout << "\n------------RobotomyRequestForm-------------\n";
	RobotomyRequestForm *fo = new RobotomyRequestForm("Robot");
	std::cout << *fo;
	try
	{
		fo->execute(*v);
	}
	catch (std::exception &e)
	{
		std::cout << "Execution error: " << e.what() << '\n';
	}
	try
        {
                v->executeForm(*fo);
        }
        catch (std::exception &e)
        {
                std::cout << "Execution error: " << e.what() << '\n';
        }
	try
	{
		v->signForm(*fo);
	}
	catch (std::exception &e)
	{
		 std::cout << "Execution error: " << e.what() << '\n';
	}
	try
        {
                fo->execute(*v);
        }
        catch (std::exception &e)
        {
                std::cout << "Execution error: " << e.what() << '\n';
        }
	zb->signForm(*fo);
	try
        {
                fo->execute(*zb);
		zb->executeForm(*fo);
        }
        catch (std::exception &e)
        {
                std::cout << "Execution error: " << e.what() << '\n';
        }
	std::cout << "\n------------PresidentialPardonForm-------------\n";
	PresidentialPardonForm *form = new PresidentialPardonForm("Nobody");
	std::cout << *form;
	try
	{
		v->signForm(*form);
	}
	catch (std::exception &e)
	{
		std::cout << "Execution error: " << e.what() << '\n';
	}
	try
	{
		zb->signForm(*form);
	}
	catch (std::exception &e)
        {
                std::cout << "Execution error: " << e.what() << '\n';
        }
	try
        {
                form->execute(*v);
        }
        catch (std::exception &e)
        {
                std::cout << "Execution error: " << e.what() << '\n';
        }
	try
        {
                form->execute(*zb);
        }
        catch (std::exception &e)
        {
                std::cout << "Execution error: " << e.what() << '\n';
        }
	try
        {
                zb->executeForm(*form);
        }
        catch (std::exception &e)
        {
                std::cout << "Execution error: " << e.what() << '\n';
        }
}
