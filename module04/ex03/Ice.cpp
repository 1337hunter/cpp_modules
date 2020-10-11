/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 18:08:10 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 12:11:50 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {}

Ice::Ice(const AMateria &obj): AMateria("ice", obj.getXP()) {}

Ice::Ice(const Ice &obj): AMateria("ice", obj.getXP()) {}

Ice	&Ice::operator=(const Ice &obj)
{
	this->setType(obj.getType());
	this->setXP(obj.getXP());
	return *this;
}


Ice::~Ice(void) {}

AMateria* Ice::clone(void) const
{
	AMateria *ret = new Ice;
	return ret;
}

void	Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
