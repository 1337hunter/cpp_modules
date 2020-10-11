/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 19:34:07 by gbright           #+#    #+#             */
/*   Updated: 2020/09/14 17:53:07 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <string>
#include <iostream>

typedef void (Human::*method)(std::string const &target);

void	Human::action(std::string const &action_name, std::string const &target)
{
	int	sum;
	method	method_arr[3] = {&Human::meleeAttack, &Human::rangedAttack,
		&Human::intimidatingShout};
	sum = 0;
	for (size_t i = 0; i  < action_name.size(); i++)
		sum += action_name[i] % 9;
	method	func = method_arr[(sum / 24 - 1) % 3];
	(this->*func)(target);
}

void	Human::meleeAttack(std::string const &target)
{
	std::cout << "Human attack " << target << " meleeAttack" << "\n";
}

void	Human::rangedAttack(std::string const &target)
{
	std::cout << "Human attack " << target << " with rangedAttack" << "\n";
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "Human attack " << target <<  " with intimidatingShout" << "\n";
}
