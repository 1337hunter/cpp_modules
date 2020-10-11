/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 12:33:32 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 13:19:09 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

int	main(void)
{
	srand(time(0));

	Intern	*newbe = new Intern;

	Form *shf = newbe->makeForm("shrubbery creation", "for_me");
	if (shf)
		std::cout << *shf;
	Form *rof = newbe->makeForm("robotomy request", "for_you");
	if (rof)
		std::cout << *rof;
	Form *prf = newbe->makeForm("presidential pardon", "for_us");
	if (prf)
		std::cout << *prf;
	Form *zoro = newbe->makeForm("zoro", "for_zoro");
	if (zoro)
                std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n";

}
