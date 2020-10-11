/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:14:39 by gbright           #+#    #+#             */
/*   Updated: 2020/09/22 18:23:36 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	_arr[0] = &Intern::shrubbery;
        _arr[1] = &Intern::robotomy;
        _arr[2] = &Intern::president;
        _name[0] = "shrubbery creation";
        _name[1] = "robotomy request";
        _name[2] = "presidential pardon";
}

Intern::Intern(const Intern &what)
{
	_arr[0] = &Intern::shrubbery;
	_arr[1] = &Intern::robotomy;
	_arr[2] = &Intern::president;
	_name[0] = "shrubbery creation";
	_name[1] = "robotomy request";
	_name[2] = "presidential pardon";
	(void)what;
}

Intern	&Intern::operator=(const Intern &what)
{
	this->_arr[0] = &Intern::shrubbery;
        this->_arr[1] = &Intern::robotomy;
        this->_arr[2] = &Intern::president;
        this->_name[0] = "shrubbery creation";
        this->_name[1] = "robotomy request";
        this->_name[2] = "presidential pardon";
	(void)what;
	return *this;
}

Intern::~Intern(void)
{
}

Form	*Intern::shrubbery(std::string target)
{
	Form	*ret = new ShrubberyCreationForm(target);
	return ret;
}

Form    *Intern::robotomy(std::string target)
{
        Form    *ret = new RobotomyRequestForm(target);
        return ret;
}

Form    *Intern::president(std::string target)
{
        Form    *ret = new PresidentialPardonForm(target);
        return ret;
}


Form	*Intern::makeForm(std::string name, std::string target)
{
	int	i;

	i = -1;
	while (++i < 3)
		if (name == _name[i])
			return (this->*(_arr[i]))(target);
	return (0);
}
