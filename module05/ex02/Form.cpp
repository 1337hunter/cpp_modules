/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:42:39 by gbright           #+#    #+#             */
/*   Updated: 2020/09/27 14:31:55 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int min_sign, int min_exec): _name(name), _signed(false),
	_min_sign(min_sign), _min_exec(min_exec)
{
	if (min_sign > 150 || min_exec > 150)
		throw GradeTooLowException();
	if (min_sign < 1 || min_exec < 1)
		throw GradeTooHighException();
}

Form	&Form::operator=(const Form &f)
{
	int	*p;

	(std::string)this->_name = f._name;
	this->_signed = f._signed;
	p = (int*)(&this->_min_sign);
	*p =  f._min_sign;
	p = (int*)(&this->_min_exec);
       	*p = f._min_exec;
	return *this;
}

Form::Form(const Form &f): _name(f._name), _signed(f._signed), _min_sign(f._min_sign),
	_min_exec(f._min_exec)
{
}

Form::~Form(void) {}



Form::GradeTooHighException::GradeTooHighException(void)
{
	_msg = new char[20];
	strcpy(_msg, "grade is too high!");
	std::runtime_error("grade is too high!\n");
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
	//std::cout << "Destruction of _msg\n";
	delete _msg;
}

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return _msg;
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return _msg;
}

const char      *Form::NotSigned::what(void) const throw()
{
        return _msg;
}

Form::NotSigned::NotSigned(void)
{
        _msg = new char[20];
        strcpy(_msg, "Form is not signed!");
        std::runtime_error("Form is not signed!");
}

Form::NotSigned::~NotSigned(void) throw()
{
        //std::cout << "Destruction of _msg\n";
        delete _msg;
}

Form::NotSigned::NotSigned(const NotSigned &e)
{
        *this = e;
}

Form::NotSigned
&Form::NotSigned::operator=(const NotSigned &e)
{
        this->_msg = new char[20];
        strcpy(_msg, e.what());
        return *this;
}

Form::GradeTooLowException::GradeTooLowException(void)
{
	_msg = new char[20];
	strcpy(_msg, "Grade is too low!");
	std::invalid_argument("grade is too low!");
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
	//std::cout << "Destruction of _msg\n";
	delete _msg;
}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &e)
{
	*this = e;
}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &e)
{
        *this = e;
}

Form::GradeTooHighException
&Form::GradeTooHighException::operator=(const GradeTooHighException &e)
{
	this->_msg = new char[20];
	strcpy(_msg, e.what());
	return *this;
}

Form::GradeTooLowException
&Form::GradeTooLowException::operator=(const GradeTooLowException &e)
{
        this->_msg = new char[20];
        strcpy(_msg, e.what());
        return *this;
}

bool	Form::isSigned(void) const
{
	return _signed;
}

std::string	Form::getName(void) const
{
	return _name;
}

int	Form::getMinSign(void) const
{
	return _min_sign;
}

int	Form::getMinExec(void) const
{
	return   _min_exec;
}

void	Form::beSigned(const Bureaucrat &bu) const
{
	if (bu.getGrade() > _min_sign)
		throw GradeTooLowException();
	 _signed = true;
}

std::ostream	&operator<<(std::ostream &os, const Form &f)
{
	os << "Form name: " << f.getName() << ";Signed: ";
	if (f.isSigned())
		os << "true";
	else
		os << "false";
	os << ";Min grade to sign: " << f.getMinSign();
	os << ";Min grade to execute: " << f.getMinExec() << std::endl;
	return os;
}
void	Form::execute(Bureaucrat const &executor) const
{
	if (!(this->isSigned()))
		throw NotSigned();
	if (this->getMinExec() < executor.getGrade())
		throw GradeTooLowException();
}
