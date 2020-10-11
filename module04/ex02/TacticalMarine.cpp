/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 13:16:44 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 23:39:58 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh...\n";
}

TacticalMarine::TacticalMarine(const TacticalMarine &obj)
{
	(void)obj;
}

TacticalMarine	&TacticalMarine::operator=(const TacticalMarine &obj)
{
	(void)obj;
	return *this;
}

ISpaceMarine	*TacticalMarine::clone(void) const
{
	ISpaceMarine	*ret = new TacticalMarine;
	return ret;
}

void		TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT!\n";
}

void		TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *\n";
}

void		TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *\n";
}
