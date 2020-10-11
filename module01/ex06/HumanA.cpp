/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 18:11:49 by gbright           #+#    #+#             */
/*   Updated: 2020/09/14 17:51:49 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string str, Weapon &wep): club(wep), name(str) {}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with his ";
	std::cout << club.getType() << std::endl;
}
