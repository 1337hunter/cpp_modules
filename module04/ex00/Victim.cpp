/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:41:06 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 10:07:39 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{
	std::cout << "Some random victim called " << name << " just appeared!\n";
}

Victim::Victim(std::string s1)
{
	name = s1;
	std::cout << "Some random victim called " << name << " just appeared!\n";
}

Victim::Victim(const Victim &what)
{
	this->name = what.getName();
}

Victim::~Victim(void)
{
	std::cout << "Victim " << name << " just died for no apparent reason!\n";
}

std::string	Victim::getName(void) const
{
	return name;
}

Victim		&Victim::operator=(const Victim &what)
{
	name = what.name;
	return *this;
}

std::ostream	&operator<<(std::ostream &os, const Victim &vic)
{
	os << "I'm " << vic.getName() << " and I like otters!\n";
	return os;
}

void	Victim::getPolymorphed(void) const
{
	std::cout << name << " has been turned into a cute little sheep!\n";
}
