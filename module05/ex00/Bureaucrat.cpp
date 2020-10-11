/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 11:39:17 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 18:56:39 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(const Bureaucrat &it)
{
	_grade = it.getGrade();
}

std::string	Bureaucrat::getName(void) const
{
	return _name;
}

int		Bureaucrat::getGrade(void) const
{
	return _grade;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
	_msg = new char[20];
	strcpy(_msg, "grade is too high!");
	std::runtime_error("grade is too high!\n");
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
	//std::cout << "Destruction of _msg\n";
	delete _msg;
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return _msg;
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return _msg;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
	_msg = new char[20];
	strcpy(_msg, "Grade is too low!");
	std::invalid_argument("grade is too low!");
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
	//std::cout << "Destruction of _msg\n";
	delete _msg;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &e)
{
	*this = e;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &e)
{
        *this = e;
}

Bureaucrat::GradeTooHighException
&Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException &e)
{
	this->_msg = new char[20];
	strcpy(_msg, e.what());
	return *this;
}

Bureaucrat::GradeTooLowException
&Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException &e)
{
        this->_msg = new char[20];
        strcpy(_msg, e.what());
        return *this;
}

void		Bureaucrat::incrementGrade(void)
{
	if (_grade <= 1)
		throw GradeTooHighException();
	_grade--;
}

void		Bureaucrat::decrementGrade(void)
{
	if (_grade >= 150)
		throw GradeTooLowException();
	_grade++;
}

const Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &it)
{
	this->_grade = it.getGrade();
	return *this;
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bu)
{
	os << "Bureaucrat " << bu.getName() << " with grade ";
	os << bu.getGrade() << std::endl;
	return os;
}
