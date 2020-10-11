/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 21:20:47 by gbright           #+#    #+#             */
/*   Updated: 2020/09/22 14:13:37 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): Form(target, 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("void", 145, 137) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=
(ShrubberyCreationForm const &what)
{
	(void)what;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm
(ShrubberyCreationForm const &what): Form(what.getName(), 145, 137) {}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::fstream	file;

	Form::execute(executor);
	file.open(this->getName() + "_shrubbery", std::fstream::out);
	file << "          .     .  .      +-     .      .          .\n     .       .      .     #       .           .\n        .      .         ##*i            .      .      .\n      .      .   '#:. .:##'##:. .:#'  .      .\n          .      . '000'111'000'  .\n       .     '#:.    .:#'###'#:.    .:#'  .        .       .\n  .             '#########'#########'        .        .\n        .    '^#:.  '####'###'####' '   .       .\n     .     .  '#######''##'##''#######'                  .\n                .'##'#####'#####'#'           .      .\n    .   '#:. ...  .:##'###'###'##:.  ... .:#'     .\n      .     '&-_^###'##'#####'##'#######'      .     .\n    .    .     '#####''#######''##-_+'''    .      .\n            .     '      000      '    .     .\n       .         .   .   000     .        .       .\n .. .. .................O000O........................\n";
	file.close();
}
