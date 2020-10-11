/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 21:20:47 by gbright           #+#    #+#             */
/*   Updated: 2020/09/22 14:14:21 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): Form(target, 25, 5) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm::PresidentialPardonForm(void): Form("void", 25, 5) {}

PresidentialPardonForm
&PresidentialPardonForm::operator=(PresidentialPardonForm const &what)
{
	(void)what;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm
(PresidentialPardonForm const &what): Form(what.getName(), 25, 5) {}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << getName() << " has been pardoned by Zafod Beeblebrox.\n";
}
