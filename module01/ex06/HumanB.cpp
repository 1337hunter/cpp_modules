/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 18:11:49 by gbright           #+#    #+#             */
/*   Updated: 2020/09/11 22:38:12 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanB::HumanB(std::string str): name(str) {}

void	HumanB::setWeapon(Weapon &biggun)
{
	club = &biggun;
}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with his ";
	std::cout << club->getType() << std::endl;
}
