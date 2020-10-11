/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 20:28:19 by gbright           #+#    #+#             */
/*   Updated: 2020/09/22 20:05:31 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Pony.hpp"

Pony::Pony(void)
{
	legs = 4;
	body = 1;
	eye = 2;
	ear = 2;
	tail = 1;
	nose = 1;
	mouth  = 1;
	mane = 1;
	std::cout << "Enter nickname for newborn Pony: ";
	std::cin >> nickname;
}

void	Pony::describe(void)
{
	std::cout << "Pony has: " << legs << " legs, " << body << " body, ";
	std::cout << eye << " eyes, " << ear << " ear, " << tail << " tail, ";
	std::cout << nose << " nose, " << mouth << " mouth, " << mane << " mane\n";
	try{
		std::cout << "It's nickname is: " << nickname << std::endl;
	}
	catch (const std::exception &e){
		std::cout << "Name can't be displaied :(\n";
	}
}

Pony::~Pony(void)
{
	std::cout << "Destruct pony :(\n";
}
