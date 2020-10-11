/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 21:20:55 by gbright           #+#    #+#             */
/*   Updated: 2020/09/27 12:42:05 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFROM_HPP
# define SHRUBBERYCREATIONFROM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm: public Form
{
	private:
				ShrubberyCreationForm(void);
	public:
				ShrubberyCreationForm(std::string const &);
				~ShrubberyCreationForm(void);
				ShrubberyCreationForm(ShrubberyCreationForm const &);
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &);
		void		execute(Bureaucrat const &executor) const;

};

#endif
