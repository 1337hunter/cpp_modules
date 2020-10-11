/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 13:59:08 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 23:51:55 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back...\n";
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &obj)
{
	(void)obj;
}

AssaultTerminator	&AssaultTerminator::operator=(const AssaultTerminator &obj)
{
	(void)obj;
	return *this;
}

ISpaceMarine	*AssaultTerminator::clone(void) const
{
	ISpaceMarine	*ret = new AssaultTerminator;
	return ret;
}

void		AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!\n";
}

void		AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *\n";
}

void		AssaultTerminator::meleeAttack(void) const
{
	std::cout <<  "* attacks with chainfists *\n";
}
