/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 14:59:40 by gbright           #+#    #+#             */
/*   Updated: 2020/09/24 22:19:36 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Buddy.hpp"
#include <iostream>
#include <fstream>

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Victim lala = Victim(jim);
	std::cout << lala << "NEW NEW NEW \n\n";
	Peon joe("Joe");

	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << "\n--------------Test Victim inheritance------------\n\n";
	
	Victim *newbe = new Victim("Newbe");
	Peon *boy = new Peon("Boy");
	Peon *girl = new Peon("Girl");
	Peon *sun = new Peon(*boy);

	std::cout << *girl;
	*girl = *boy;
	std::cout << *girl;
	std::cout << *sun;
	
	Sorcerer *balda = new Sorcerer(robert);
	std::cout << balda->getName() << "\n";
	Sorcerer *what = new Sorcerer("WHAT", "IS GOING ON?");
	std::cout << *what << "\n";
	//*what = *balda;
	std::cout << what->getName() << "\n";
	*newbe = joe;
	std::cout << newbe->getName() << "\n";
	balda->polymorph(*newbe);
	jim.getPolymorphed();
	joe.getPolymorphed();
	newbe->getPolymorphed();
	std::cout << "\n----------Virtual world of polymorphism is coming--------\n" << std::endl;
	Buddy *b1 = new Buddy("Friendly");
	Buddy *b2 = new Buddy(*b1);
	std::cout << *b1;
	std::cout << *b2;
	b1->getPolymorphed();
	robert.polymorph(*b1);
	delete b1;
	std::cout << "\n--------------Virtual world going away---------\n" << std::endl;

	delete boy; std::cout << std::flush;
	delete girl;
	delete sun;
	delete balda;
	delete what;
	std::cout << "\n----------------Static members dying------------\n" << std::endl;
}
