/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:14:28 by gbright           #+#    #+#             */
/*   Updated: 2020/09/22 17:59:29 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
	private:
		Form		*(Intern::*_arr[3])(std::string);
		std::string	_name[3];
	public:
			Intern(void);
			Intern(const Intern &);
		Intern	&operator=(const Intern &);
			~Intern(void);
		Form	*makeForm(std::string, std::string);
		Form	*shrubbery(std::string);
		Form	*robotomy(std::string);
		Form	*president(std::string);
};

#endif
