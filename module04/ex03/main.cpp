/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 22:08:31 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 13:03:09 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());

	AMateria *ret = src->createMateria("cure");
	std::cout << ret << " addres of cure = 0x0\n";

	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	
	AMateria *tmp1;
	tmp1 = src->createMateria("ice");
	std::cout << "ice: _xp = " << tmp1->getXP() << " type: " << tmp1->getType();
	std::cout << std::endl;
	me->equip(tmp1);
	AMateria *tmp2;
	tmp2 = src->createMateria("cure");
	std::cout << "cure: _xp = " << tmp2->getXP() << " type: " << tmp2->getType();
	std::cout << std::endl;
	me->equip(tmp2);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	std::cout << "ice: _xp = " << tmp1->getXP() << " type: " << tmp1->getType();
        std::cout << std::endl;
	me->use(1, *bob);
	std::cout << "cure: _xp = " << tmp2->getXP() << " type: " << tmp2->getType();
        std::cout << std::endl;
	me->use(1, *bob);
	std::cout << "cure: _xp = " << tmp2->getXP() << " type: " << tmp2->getType();
        std::cout << std::endl;
	AMateria *copy = new Ice(*tmp1);
	std::cout << "copy ice: _xp = " << copy->getXP() << " type: " << copy->getType();
        std::cout << std::endl;
	*copy = *tmp2;
	std::cout << "operator=: _xp = " << copy->getXP() << " type: " << copy->getType();
        std::cout << std::endl;
	Character	you = Character("you");
	Character	someone = Character(you);
	Character	newme = Character("newme");

	newme = you;
	std::cout << "you.getName(): " << you.getName() << '\n';
	std::cout << "someone.getName(): " << someone.getName() << '\n';
	std::cout << "newme.getName(): " << newme.getName() << '\n';

	delete copy;
	delete bob;
	delete me;
	delete src;
	return 0;
}
