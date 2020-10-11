/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 21:26:10 by gbright           #+#    #+#             */
/*   Updated: 2020/09/23 16:33:37 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <ctime>
#include <iostream>

FragTrap::FragTrap(void): hp(100), max_hp(100), energyp(100),
        max_energyp(100), level(1), name("void"), melee_attack_dmg(30), ranged_attack_dmg(20), armor_dmg_reduction(5)
{
	std::cout << "Hello world! I'm created for opening doors! Psshhhhhhhhh...";
	std::cout << " and ninja-sassinate highly important Janitory officals!\n";
	attack[0] = "Kiaaaaaaaaaa shouts";
	attack[1] = "Stun gun called 'SHOKER'";
	attack[2] = "AK-47";
	attack[3] = "M16";
	attack[4] = "Throwing stones";
	attack[5] = "Wooden bow";
	attack[6] = "Mental attack";
}

FragTrap::FragTrap(std::string str): hp(100), max_hp(100), energyp(100),
	max_energyp(100), level(1), melee_attack_dmg(30), ranged_attack_dmg(20),
	armor_dmg_reduction(5)
{
	name = str;
	std::cout << "Hello world! I'm created for opening doors! Psshhhhhhhhh...";
	std::cout << " and ninja-sassinate highly important Janitory officals!\n";
	attack[0] = "Kiaaaaaaaaaa shouts";
	attack[1] = "Stun gun called 'SHOKER'";
	attack[2] = "AK-47";
	attack[3] = "M16";
	attack[4] = "Throwing stones";
	attack[5] = "Wooden bow";
	attack[6] = "Mental attack";
}

FragTrap::~FragTrap(void)
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!\n";
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
		this->attack[i] = what.attack[i];
	return *this;
}

void	FragTrap::rangedAttack(std::string const &target)
{
	if (hp > 0)
	{
		level++;
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

void	FragTrap::meleeAttack(std::string const &target)
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

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
{
	energyp = max_energyp;
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

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (hp > 0)
	{
		if (energyp >= 25)
		{
			energyp -= 25;
			std::cout << "FR4G-TP " << name << " attacks " << target << " with ";
			std::cout << attack[rand() % 7] << '\n';
		}
		else
			std::cout << "Oh, man! I am too tired to even move my ass.\n";
	}
	else
		std::cout << "Didn't got me? I can't attack. I AM DEAD!!!\n";
}
