/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:36:32 by gbright           #+#    #+#             */
/*   Updated: 2020/09/27 12:37:24 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	std::string const	_name;
	mutable bool		_signed;
	int const		_min_sign;
	int const		_min_exec;
public:
	class GradeTooHighException: public std::exception
	{
		char	*_msg;
	public:
		virtual const char	*what(void) const throw();
					GradeTooHighException(void);
					GradeTooHighException(const GradeTooHighException &);
		virtual			~GradeTooHighException(void) throw();
		GradeTooHighException	&operator=(const GradeTooHighException &e);
	};
	class GradeTooLowException: public std::exception
	{
		char	*_msg;
	public:
					GradeTooLowException(const GradeTooLowException &);
		virtual			~GradeTooLowException(void) throw();
					GradeTooLowException(void);
		virtual const char	*what(void) const throw();
		GradeTooLowException	&operator=(const GradeTooLowException &e);
	};
	class NotSigned: public std::exception
        {
                char    *_msg;
        public:
                                        NotSigned(const NotSigned &);
                virtual                 ~NotSigned(void) throw();
                                        NotSigned(void);
                virtual const char      *what(void) const throw();
                NotSigned		   &operator=(const NotSigned &e);
        };
			Form(std::string, int, int);
			Form(void);
		Form	&operator=(const Form &);
			Form(const Form &);
		virtual	~Form(void);
		std::string	getName(void) const;
		bool		isSigned(void) const; 
		int		getMinSign(void) const;
		int		getMinExec(void) const;
		void		sign(void);
		void		beSigned(const Bureaucrat &) const;
		virtual void	execute(Bureaucrat const &executor) const = 0;
};

std::ostream	&operator<<(std::ostream &, const Form &);

#endif
