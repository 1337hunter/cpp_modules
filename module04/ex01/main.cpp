/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 21:57:39 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 11:00:58 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"

int main()
{
	std::cout << "\n--------------New Character--------------\n\n";
	Character*	me = new Character("me");
	std::cout << *me;
	std::cout << "\n--------------PlasmaRifle--------------\n\n";
	AWeapon         *pr = new PlasmaRifle();
	std::cout << "getName:\t" << pr->AWeapon::getName() << '\n';
	std::cout << "getAPCost:\t" << pr->getAPCost() << '\n';
	std::cout << "getDamage:\t" << pr->getDamage() << '\n';
	std::cout << "Rifle attck:\t"; pr->attack();
	std::cout << "\n--------------PowerFist--------------\n\n";
	AWeapon         *pf = new PowerFist();
	std::cout << "getName:\t" << pf->AWeapon::getName() << '\n';
        std::cout << "getAPCost:\t" << pf->getAPCost() << '\n';
        std::cout << "getDamage:\t" << pf->getDamage() << '\n';
        std::cout << "Rifle attck:\t"; pf->attack();
	std::cout << "\n--------------RadScorpion--------------\n\n";
	Enemy           *b = new RadScorpion();
	std::cout << "getType():\t" << b->getType() << '\n';
	std::cout << "getHP():\t" << b->getHP() << '\n';
	Enemy           *c = new RadScorpion();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);

	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	*c = *b;
	std::cout << "c->getHP():\t" << c->getHP() << '\n';
	std::cout << "b->getHP():\t" << b->getHP() << '\n';
	me->attack(c);
	std::cout << "c->getHP():\t" << c->getHP() << '\n';
	std::cout << "b->getHP():\t" << b->getHP() << '\n';
	me->recoverAP();
	me->recoverAP();
	me->attack(b);
	std::cout << "c->getHP():\t" << c->getHP() << '\n';
        std::cout << "b->getHP():\t" << b->getHP() << '\n';
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	std::cout << "\n-----------SuperMutant hunting (go crazy)------\n\n";
	Enemy		*su = new SuperMutant();
	Character	*me2 = new Character(*me);
	me2->equip(pf);
	std::cout << *me;
	std::cout << *me2;
	std::cout << "su->getHP():\t" << su->getHP() << '\n';
	me->attack(su);
	std::cout << "su->getHP():\t" << su->getHP() << '\n';
	me2->attack(su);
	std::cout << "su->getHP():\t" << su->getHP() << '\n';
	std::cout << *me;
	std::cout << *me2;
	me->attack(su);
	std::cout << "su->getHP():\t" << su->getHP() << '\n';
        me2->attack(su);
	std::cout << "su->getHP():\t" << su->getHP() << '\n';
	me2->attack(su);
	std::cout << "su->getHP():\t" << su->getHP() << '\n';
	std::cout << "Have a good dinner!\n";

	return 0;
}
