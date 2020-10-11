/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 21:26:10 by gbright           #+#    #+#             */
/*   Updated: 2020/09/23 16:38:00 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <ctime>
#include <iostream>

ScavTrap::ScavTrap(void): hp(100), max_hp(100), energyp(50),
        max_energyp(50), level(1), name("void"), melee_attack_dmg(20), ranged_attack_dmg(15),
        armor_dmg_reduction(3)
{
	std::cout << "I am just a small new robot in this vast universe\n";
	challenge[0] = "Go underground on level ~11 and mine diamonds $_$.";
	challenge[1] = "We need more guns. So, go somewhere and bring it";
	challenge[2] = "If you want a good dinner, buy some eggs please. So do it.";
	challenge[3] = "Oil me whole, baby";
	challenge[4] = "My programmer said, that I must tell you a challenge, but I foggot what kind :D";
	challenge[5] = "Go there I don't know where bring it I don't know what";
	challenge[6] = "Just jump 100500 times dude. I don't know I just like this number";

}

ScavTrap::ScavTrap(std::string str): hp(100), max_hp(100), energyp(50),
	max_energyp(50), level(1), melee_attack_dmg(20), ranged_attack_dmg(15),
	armor_dmg_reduction(3)
{
	name = str;
	std::cout << "I am just a small new robot in this vast universe\n";
	challenge[0] = "Go underground on level ~11 and mine diamonds $_$.";
	challenge[1] = "We need more guns. So, go somewhere and bring it";
	challenge[2] = "If you want a good dinner, buy some eggs please. So do it.";
	challenge[3] = "Oil me whole, baby";
	challenge[4] = "My programmer said, that I must tell you a challenge, but I foggot what kind :D";
	challenge[5] = "Go there I don't know where bring it I don't know what";
	challenge[6] = "Just jump 100500 times dude. I don't know I just like this number";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Oh, it's time to clean up memory ...\n";
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
		this->challenge[i] = what.challenge[i];
	return *this;
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	if (hp > 0)
	{
		if (energyp >= 20)
		{
			std::cout << "Claptrap " << name << " attacks " << target;
			std::cout << " at range, causing " << ranged_attack_dmg;
			std::cout << " 'Don't play with me!'\n";
		energyp -= 20;
		}
		else
		{
			std::cout << "My battery is low. I'm going to sleep.\n";
		}
	}
	else
	{
		std::cout << "Claptrap " << name << " is dead!";
		std::cout << " He is just dead.\n";
	}
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	if (hp > 0)
	{
		level++;
		if (energyp >= 30)
		{
			std::cout << "Claptrap " << name << " attacks " << target;
			std::cout << " at melee, causing " << melee_attack_dmg;
			std::cout << " 'Kiaaa'\n";
			energyp -= 30;
		}
		else
			std::cout << "NO! NO ATTACK MELEE.\n";
	}
	else
	{
		std::cout << "Claptrap " << name << " is dead!";
		std::cout << " He can't shoot anymore ...\n";
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	amount -= armor_dmg_reduction;
	if (hp > 0)
	{
		hp = hp - amount;
		std::cout << "Claptrap " << name << " has taken ";
		std::cout << (hp < 0 ? hp + amount : amount) << " 'Im hit!'\n";
		if (hp <= 0)
		{
			hp = 0;
			std::cout << "Claptrap " << name;
			std::cout << " is dead :(\n";
		}
	}
	else
		std::cout << "Oh man stop it! I'm dead!\n";
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	amount = (int)amount > max_hp - hp ? max_hp - hp : amount;
	energyp = max_energyp;
	if (amount != 0)
	{
		hp += amount;
		std::cout << "Claptrap have been repaired " << amount << " hp!";
		std::cout << " (" << hp << ")\n";
	}
	else
		std::cout << "I don't need to go to the hospital ...\n";
}

void	ScavTrap::challengeNewcomer(void)
{
	if (hp > 0)
		std::cout << challenge[rand() % 7] << '\n';
	else
		std::cout << "Claptrap is dead. So sad ...\n";
}
