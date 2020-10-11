/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 13:07:26 by gbright           #+#    #+#             */
/*   Updated: 2020/09/27 12:42:28 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <ctime>
# include <cstdlib>
# include <iostream>

class	RobotomyRequestForm: public Form
{
				RobotomyRequestForm(void);
	public:
				RobotomyRequestForm(std::string const &);
				~RobotomyRequestForm(void);
				RobotomyRequestForm(RobotomyRequestForm const &);
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &);
		void		execute(Bureaucrat const &executor) const;
};

#endif
