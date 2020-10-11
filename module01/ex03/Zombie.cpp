/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 09:07:23 by gbright           #+#    #+#             */
/*   Updated: 2020/09/11 12:03:49 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include <string>

Zombie::Zombie(std::string str)
{
	name = str;
}

Zombie::Zombie(void) {}

void	Zombie::announce(void)
{
	std::cout << '<' << name << '(' << type << ')' << '>';
	std::cout << " Braiiiiiiinnnssss...";
	std::cout << std::endl;
}

void	Zombie::set_type(std::string str)
{
	type = str;
}

void    Zombie::set_name(std::string str)
{
	name = str;
}
