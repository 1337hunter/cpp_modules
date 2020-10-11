/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 12:25:03 by gbright           #+#    #+#             */
/*   Updated: 2020/09/16 13:43:13 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <ctime>
#include <iostream>

int	main(void)
{
	FragTrap	robot("HOLY_MOLY");

	std::cout << "*************FragTrap test*************\n";
	srand(time(0));
	robot.rangedAttack("Rage zombie");
	robot.meleeAttack("Old cactus");
	robot.vaulthunter_dot_exe("YOU");
	robot.vaulthunter_dot_exe("YOU");
	robot.vaulthunter_dot_exe("YOU");
	robot.rangedAttack("Rage zombie");
        robot.meleeAttack("Old cactus");
	robot.takeDamage(10);
	robot.takeDamage(100);
	robot.meleeAttack("Old cactus");
	robot.takeDamage(100);
	robot.beRepaired(10);
	robot.beRepaired(9000);
	robot.beRepaired(9000);

	std::cout << "\n*************ScavTrap test*************\n\n";
	ScavTrap	scav("HYPI");
	scav.rangedAttack("Someone");
        scav.meleeAttack("Superjet");
	scav.meleeAttack("Superjet");
	scav.takeDamage(100);
	scav.takeDamage(100);
	scav.beRepaired(1000);
	scav.beRepaired(1000);
        scav.challengeNewcomer();
        scav.challengeNewcomer();
        scav.challengeNewcomer();

	std::cout << "\n*************NinjaTrap test*************\n\n";
	NinjaTrap	ninja("KILLER");
	ninja.ninjaShoebox(robot);
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(ninja);
	ninja.ninjaShoebox(ninja);


	std::cout << "\n*************Super test*************\n\n";
	SuperTrap	super("SUPER");
	super.meleeAttack("Human");
	super.rangedAttack("YOU");
	super.ninjaShoebox(scav);
	super.vaulthunter_dot_exe("Zombie");
	std::cout << "\n********** end of super test *********\n\n";
}
