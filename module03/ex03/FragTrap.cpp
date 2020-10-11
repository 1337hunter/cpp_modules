/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 21:26:10 by gbright           #+#    #+#             */
/*   Updated: 2020/09/23 16:53:20 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <ctime>
#include <iostream>

FragTrap::FragTrap(void)
{
	name = "void";
	hp = 100;
	max_hp = 100;
	energyp = 100;
	max_energyp = 100;
	level = 1;
	melee_attack_dmg = 30;
	ranged_attack_dmg = 30;
	armor_dmg_reduction = 5;
	std::cout << "Hello world! I'm created for opening doors! Psshh... ";
	std::cout << " and ninja-sassinate highly important Janitory officals!";
	std::cout << " >(FragTrap constructer called)<\n";
	justfun[0] = "Kiaaaaaaaaaa shouts";
	justfun[1] = "Stun gun called 'SHOKER'";
	justfun[2] = "AK-47";
	justfun[3] = "M16";
	justfun[4] = "Throwing stones";
	justfun[5] = "Wooden bow";
	justfun[6] = "Mental attack";
}

FragTrap::FragTrap(std::string str)
{
	name = str;
	hp = 100;
	max_hp = 100;
	energyp = 100;
	max_energyp = 100;
	level = 1;
	melee_attack_dmg = 30;
	ranged_attack_dmg = 30;
	armor_dmg_reduction = 5;
	std::cout << "Hello world! I'm created for opening doors! Psshh... ";
	std::cout << " and ninja-sassinate highly important Janitory officals!";
	std::cout << " >(FragTrap constructer called)<\n";
	justfun[0] = "Kiaaaaaaaaaa shouts";
	justfun[1] = "Stun gun called 'SHOKER'";
	justfun[2] = "AK-47";
	justfun[3] = "M16";
	justfun[4] = "Throwing stones";
	justfun[5] = "Wooden bow";
	justfun[6] = "Mental attack";
}


FragTrap::~FragTrap(void)
{
	std::cout << "Good bye world! Is there something? (FragTrap)\n";
}

FragTrap::FragTrap(const FragTrap &what)
{
	*this = what;
}

FragTrap	&FragTrap::operator=(const FragTrap &what)
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

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (hp > 0)
	{
		if (energyp >= 25)
		{
			energyp -= 25;
			std::cout << "FR4G-TP " << name << " attacks " << target << " with ";
			std::cout << justfun[rand() % 7] << '\n';
		}
		else
			std::cout << "Oh, man! I am too tired to even move my ass.\n";
	}
	else
		std::cout << "Didn't got me? I can't attack. I AM DEAD!!!\n";
}
