/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 13:07:26 by gbright           #+#    #+#             */
/*   Updated: 2020/09/27 12:38:19 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <iostream>

class	PresidentialPardonForm: public Form
{
				PresidentialPardonForm(void);
	public:
				PresidentialPardonForm(std::string const &);
				~PresidentialPardonForm(void);
				PresidentialPardonForm(PresidentialPardonForm const &);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &);
		void		execute(Bureaucrat const &executor) const; 
};

#endif
