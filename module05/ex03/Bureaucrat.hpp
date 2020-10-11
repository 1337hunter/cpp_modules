/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 11:39:11 by gbright           #+#    #+#             */
/*   Updated: 2020/09/27 12:40:26 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
# define BUREAUCRAT

# include <string>
# include <stdexcept>
# include <iostream>
# include <cstring>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	std::string const	_name;
	int			_grade;
public:
	class GradeTooHighException: public std::exception
	{
		char		*_msg;
	public:
		const char	*what(void) const throw();
				GradeTooHighException(void);
				GradeTooHighException(const GradeTooHighException &);
		virtual		~GradeTooHighException(void) throw();
		GradeTooHighException	&operator=(const GradeTooHighException &e);
	};
	class GradeTooLowException: public std::exception
	{
		char		*_msg;
	public:
				GradeTooLowException(const GradeTooLowException &);
		virtual		~GradeTooLowException(void) throw();
				GradeTooLowException(void);
		const char	*what(void) const throw();
		GradeTooLowException   &operator=(const GradeTooLowException &e);
	};
			Bureaucrat(void);
			Bureaucrat(std::string, int);
			~Bureaucrat(void);
			Bureaucrat(const Bureaucrat &);
	void		incrementGrade(void);
	void		decrementGrade(void);
	std::string	getName(void) const;
	int		getGrade(void) const;
	void		signForm(const Form &) const;
	void		executeForm(Form const &form);
	const Bureaucrat        &operator=(const Bureaucrat &);
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bu);

#endif
