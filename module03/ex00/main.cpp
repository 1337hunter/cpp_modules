/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 12:25:03 by gbright           #+#    #+#             */
/*   Updated: 2020/09/23 16:35:23 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <ctime>
#include <iostream>

int	main(void)
{
	FragTrap	robot("NINJA");
	FragTrap	robocopy(robot);
	FragTrap	roboass = robocopy;
	FragTrap	voidy;

	srand(time(0));
	robot.rangedAttack("Rage zombie");
	robot.meleeAttack("Old cactus");
        robot.vaulthunter_dot_exe("YOU");
	std::cout << "--------------test copy---------------\n";
	robocopy.meleeAttack("Old cactus");
	roboass.vaulthunter_dot_exe("YOU");
	roboass = robot;
	std::cout << "--------------------------------------\n";
	robot.vaulthunter_dot_exe("YOU");
	robot.vaulthunter_dot_exe("YOU");
	robot.rangedAttack("Rage zombie");
        robot.meleeAttack("Old cactus");
	std::cout << "--------------test copy---------------\n";
	roboass = robot;
	roboass.meleeAttack("Old cactus");
	roboass.rangedAttack("Rage zombie");
        std::cout << "--------------------------------------\n";
	robot.takeDamage(10);
	robot.takeDamage(100);
	robot.meleeAttack("Old cactus");
	robot.takeDamage(100);
	robot.beRepaired(10);
	robot.beRepaired(9000);
	robot.beRepaired(9000);
}
