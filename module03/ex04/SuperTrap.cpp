/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 21:26:10 by gbright           #+#    #+#             */
/*   Updated: 2020/09/23 17:15:57 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <ctime>
#include <iostream>

SuperTrap::SuperTrap(void): NinjaTrap("void"), FragTrap("void")
{
	this->name = "void";
	hp = 100;
	max_hp = 100;
	energyp = 120;
	max_energyp = 120;
	level = 1;
	melee_attack_dmg = 60;
	ranged_attack_dmg = 30;
	armor_dmg_reduction = 5;
	std::cout << "Look at me! I'M SUPER!";
	std::cout << " >(SuperTrap constructer called)<\n";
}


SuperTrap::SuperTrap(std::string str): NinjaTrap(str), FragTrap(str)
{
	this->name = str;
	hp = 100;
	max_hp = 100;
	energyp = 120;
	max_energyp = 120;
	level = 1;
	melee_attack_dmg = 60;
	ranged_attack_dmg = 30;
	armor_dmg_reduction = 5;
	std::cout << "Look at me! I'M SUPER!";
	std::cout << " >(SuperTrap constructer called)<\n";
}

SuperTrap::SuperTrap(const SuperTrap &what)
{
	*this = what;
}

SuperTrap	&SuperTrap::operator=(const SuperTrap &what)
{
	this->name = "void";
	hp = 100;
	max_hp = 100;
	energyp = 120;
	max_energyp = 120;
	level = 1;
	melee_attack_dmg = 60;
	ranged_attack_dmg = 30;
	armor_dmg_reduction = 5;

	int i = -1;
	while (++i < 7)
		this->justfun[i] = what.justfun[i];
	return *this;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "Super. Just SUPER destruction       (SuperTrap)\n";
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::describe(void)
{
	std::cout << "Super describe:\n";
	std::cout << "name: " << name << '\n' << "hp :" << hp << '\n';
	std::cout << "max hp: " << max_hp << '\n' << "energyp: " << energyp;
	std::cout << '\n' << "max ep: " << max_energyp << '\n';
	std::cout << "melee_attack_dmg: " << melee_attack_dmg << '\n';
	std::cout << "ranged_attack_dmg: " << ranged_attack_dmg << '\n';
	std::cout << "armor_dmg_reduction: " << armor_dmg_reduction << '\n';
}
