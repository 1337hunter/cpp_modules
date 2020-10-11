/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 21:26:10 by gbright           #+#    #+#             */
/*   Updated: 2020/09/16 13:49:02 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <ctime>
#include <iostream>

ClapTrap::ClapTrap(void)
{
	std::cout << "Pshhhhh.. Hello from  ClapTrap constructor\n";
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD! (ClapTrap)\n";
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	if (hp > 0)
	{
		if (energyp >= 20)
		{
			std::cout << "FR4G-TP " << name << " attacks " << target;
			std::cout << " at range, causing " << ranged_attack_dmg;
			std::cout << " 'Chk-chk, BOOM!'\n";
		energyp -= 20;
		}
		else
		{
			std::cout << "Do you know about 'Quick Charge' technology?\n";
		}
	}
	else
	{
		std::cout << "FR4G-TP " << name << " is dead!";
		std::cout << " He can't attack even little pig.\n";
	}
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	if (hp > 0)
	{
		if (energyp >= 30)
		{
			std::cout << "FR4G-TP " << name << " attacks " << target;
			std::cout << " at melee, causing " << melee_attack_dmg << " 'TAKE THAT!'\n";
			energyp -= 30;
		}
		else
			std::cout << "RLY? Charge me first, bro!\n";
	}
	else
	{
		std::cout << "FR4G-TP " << name << " is dead!";
		std::cout << " He can't even shoot a bird for breakfast.\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount -= armor_dmg_reduction;
	if (hp > 0)
	{
		hp = hp - amount;
		std::cout << "FR4G-TP " << name << " has taken ";
		std::cout << (hp < 0 ? hp + amount : amount) << " 'Im hit!'\n";
		if (hp <= 0)
		{
			hp = 0;
			std::cout << "Ththththththh pshhhhhh BOOOOOOM! FR4G-TP " << name;
			std::cout << " is dead\n";
		}
	}
	else
		std::cout << "I AM DEAD ALREADY!\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	amount = (int)amount > max_hp - hp ? max_hp - hp : amount;
	if (amount != 0)
	{
		hp += amount;
		std::cout << "Oh thx! I feel myself better with " << amount << " more hp!";
		std::cout << " (" << hp << ")\n";
	}
	else
		std::cout << "I'm good on hp ...\n";
}
