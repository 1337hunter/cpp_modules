/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 17:46:59 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 12:11:58 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {}

Cure::Cure(const AMateria &obj): AMateria("cure", obj.getXP()) {}

Cure::~Cure(void) {}

Cure	&Cure::operator=(const Cure &obj)
{
	this->setType(obj.getType());
	this->setXP(obj.getXP());
	return *this;
}

Cure::Cure(const Cure &obj): AMateria("cure", obj.getXP()) {}

AMateria	*Cure::clone(void) const
{
	AMateria	*ret = new Cure;
	return ret;
}

void	Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() <<" wounds *\n";
}
