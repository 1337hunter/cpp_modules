/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:17:35 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 23:36:09 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant &SuperMutant::operator=(const SuperMutant &obj)
{
	this->hp = obj.hp;
	this->type = obj.type;
	return *this;
}

SuperMutant::SuperMutant(const SuperMutant &obj)
{
	*this = obj;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh...\n";
}

void	SuperMutant::takeDamage(int dmg)
{
	dmg -= 3;
	Enemy::takeDamage(dmg);
}
