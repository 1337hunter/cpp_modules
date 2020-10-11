/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 21:26:10 by gbright           #+#    #+#             */
/*   Updated: 2020/09/23 16:56:55 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <ctime>
#include <iostream>

NinjaTrap::NinjaTrap(void)
{
	name = "void";
	hp = 60;
	max_hp = 60;
	energyp = 120;
	max_energyp = 120;
	level = 1;
	melee_attack_dmg = 60;
	ranged_attack_dmg = 5;
	armor_dmg_reduction = 0;
	std::cout << "Now I'm NOT for opening doors... I AM NINJA! I AM CRIMINAL!";
	std::cout << " >(NinjaTrap constructer called)<\n";
}

NinjaTrap::NinjaTrap(std::string str)
{
	name = str;
	hp = 60;
	max_hp = 60;
	energyp = 120;
	max_energyp = 120;
	level = 1;
	melee_attack_dmg = 60;
	ranged_attack_dmg = 5;
	armor_dmg_reduction = 0;
	std::cout << "Now I'm NOT for opening doors... I AM NINJA! I AM CRIMINAL!";
	std::cout << " >(NinjaTrap constructer called)<\n";
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "I'M NINJA I'M NEVER GIVE UP!        (NinjaTrap)\n";
}

NinjaTrap::NinjaTrap(const NinjaTrap &what)
{
	*this = what;
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &what)
{
	this->hp = what.hp;
	this->max_hp = what.max_hp;
	this->energyp = what.energyp;
	this->max_energyp = what.max_energyp;
	this->level = what.level;
	this->name = what.name;
	this->melee_attack_dmg = what.melee_attack_dmg;
	this->ranged_attack_dmg = what.ranged_attack_dmg;
	this->armor_dmg_reduction = what.armor_dmg_reduction;

	int i = -1;
	while (++i < 7)
		this->justfun[i] = what.justfun[i];
	return *this;
}

void	NinjaTrap::ninjaShoebox(FragTrap &itsatrap)
{
	std::cout << "Ninja " << name << " ATAAAAACK: ";
	itsatrap.takeDamage(melee_attack_dmg);
}
void	NinjaTrap::ninjaShoebox(ScavTrap &itsatrap)
{
	std::cout << "Ninja " << name << " ATAAAAACK: ";
	itsatrap.takeDamage(melee_attack_dmg);
}
void	NinjaTrap::ninjaShoebox(NinjaTrap &itsatrap)
{
	std::cout << "Ninja " << name << " is going to do harakiri!: ";
        itsatrap.takeDamage(melee_attack_dmg);
}
