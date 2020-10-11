/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 12:40:26 by gbright           #+#    #+#             */
/*   Updated: 2020/09/11 12:51:49 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	brain;
	std::string	*ptr_to_brain;
	std::string	&ref_to_brain = brain;

	brain = "HI THIS IS BRAIN";
	ptr_to_brain = &brain;

	std::cout << *ptr_to_brain << std::endl;
	std::cout << ref_to_brain << std::endl;
}
