/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 17:32:39 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 12:35:52 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): _type(type), _xp(0) {}

AMateria::AMateria(std::string const &type, unsigned int xp): _type(type), _xp(xp) {}

AMateria::~AMateria(void) {}

AMateria::AMateria(const AMateria &obj)
{
	this->_type = obj.getType();
	this->_xp = obj.getXP();
}

void	AMateria::setType(std::string const &type)
{
	this->_type = type;
}

void	AMateria::setXP(unsigned int xp)
{
	this->_xp = xp;
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}

unsigned int	AMateria::getXP(void) const
{
	return _xp;
}

std::string const	&AMateria::getType(void) const
{
	return _type;
}

void	AMateria::operator=(const AMateria &what)
{
	this->_xp = what.getXP();
	this->_type = what.getType();
}
