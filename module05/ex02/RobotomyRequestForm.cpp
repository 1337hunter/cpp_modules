/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 21:20:47 by gbright           #+#    #+#             */
/*   Updated: 2020/09/22 14:17:56 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): Form(target, 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm::RobotomyRequestForm(void): Form("void", 72, 45) {}

RobotomyRequestForm &RobotomyRequestForm::operator=
(RobotomyRequestForm const &what)
{
	(void)what;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm
(RobotomyRequestForm const &what): Form(what.getName(), 72, 45) {}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	if (rand() % 2)
	{
		std::cout << "* Brrrrrrrrrrrr * " << getName();
		std::cout << " has been robotomized successfully\n";
	}
	else
	{
		std::cout << "* Brrrrrrrrrrrr * " << getName();
		std::cout << " failed to be robotomized\n";
	}
}
