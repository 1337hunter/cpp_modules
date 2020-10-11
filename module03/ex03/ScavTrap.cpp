/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 21:26:10 by gbright           #+#    #+#             */
/*   Updated: 2020/09/23 16:52:22 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <ctime>
#include <iostream>

ScavTrap::ScavTrap(void)
{
	std::cout << "I am just a small new robot in this vast universe";
	std::cout << " >(ScavTrap constructor called)<\n";
	name = "void";
	hp = 100;
	max_hp = 100;
	energyp = 50;
	max_energyp = 50;
	level = 1;
	melee_attack_dmg = 20;
	ranged_attack_dmg = 15;
	armor_dmg_reduction = 3;
	justfun[0] = "Go underground on level ~11 and mine diamonds $_$.";
	justfun[1] = "We need more guns. So, go somewhere and bring it";
	justfun[2] = "If you want a good dinner, buy some eggs please. So do it.";
	justfun[3] = "Oil me whole, baby";
	justfun[4] = "My programmer said, that I must tell you a challenge, but I foggot what kind :D";
	justfun[5] = "Go there I don't know where bring it I don't know what";
	justfun[6] = "Just jump 100500 times dude. I don't know I just like this number";
}

ScavTrap::ScavTrap(std::string str)
{
	std::cout << "I am just a small new robot in this vast universe";
	std::cout << " >(ScavTrap constructor called)<\n";
	name = str;
	hp = 100;
	max_hp = 100;
	energyp = 50;
	max_energyp = 50;
	level = 1;
	melee_attack_dmg = 20;
	ranged_attack_dmg = 15;
	armor_dmg_reduction = 3;
	justfun[0] = "Go underground on level ~11 and mine diamonds $_$.";
	justfun[1] = "We need more guns. So, go somewhere and bring it";
	justfun[2] = "If you want a good dinner, buy some eggs please. So do it.";
	justfun[3] = "Oil me whole, baby";
	justfun[4] = "My programmer said, that I must tell you a challenge, but I foggot what kind :D";
	justfun[5] = "Go there I don't know where bring it I don't know what";
	justfun[6] = "Just jump 100500 times dude. I don't know I just like this number";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Oh, it's time to clean up memory... (ScavTrap)\n";
}

ScavTrap::ScavTrap(const ScavTrap &what)
{
	*this = what;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &what)
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

void	ScavTrap::challengeNewcomer(void)
{
	if (hp > 0)
		std::cout << justfun[rand() % 7] << '\n';
	else
		std::cout << "ScavTrap is dead. So sad ...\n";
}
