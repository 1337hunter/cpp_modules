/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 12:29:31 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 11:33:08 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

int	main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine *cleaner = new TacticalMarine;
	ISpaceMarine *cat = new AssaultTerminator;
	ISpaceMarine *gbright = cat->clone();

	std::cout << "\n------------------------------------------------\n";
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	Squad *my = new Squad(*vlc); //copy constructor
	std::cout << "my->getCount():\t" << my->getCount() << std::endl;
	Squad *here = new Squad;
	*here = *my; //operator=
	*here = *my;
	my->push(gbright);
	std::cout << "my->getCount():\t" << my->getCount() << std::endl;
	here->push(cat);
	std::cout << "here->getCount():\t" << here->getCount() << std::endl;
	here->push(cat);
	std::cout << "here->getCount():\t" << here->getCount() << std::endl;
	here->push(cleaner);
	std::cout << "here->getCount():\t" << here->getCount() << std::endl;
	std::cout << "\n----------------my own squad 'my'-----------\n\n";
	std::cout << "my->getCount():\t" << my->getCount() << std::endl;
	for (int i = 0; i < my->getCount(); i++)
	{
		ISpaceMarine *sir = my->getUnit(i);
		sir->battleCry();
	}
	std::cout << "\n----------------my own squad 'here'-----------\n\n";
        std::cout << "my->getCount():\t" << here->getCount() << std::endl;
        for (int i = 0; i < here->getCount(); i++)
        {
                ISpaceMarine *sir = here->getUnit(i);
                sir->battleCry();
        }
        std::cout << "\n-----------------------------------------------\n";
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "\n----------whole squads is dying for the PURE CODE!---------\n";
	delete my;
	delete here;
	delete vlc;

	return 0;
}

//for exit vim press ':q!'
