/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:41:06 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 10:12:56 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void): Victim()
{
	std::cout << "Zog zog.\n";
}

Peon::Peon(std::string s1): Victim(s1)
{
	std::cout << "Zog zog.\n";
}

Peon::Peon(const Peon &it): Victim(it.name)
{
	name = it.getName();
	std::cout << "Zog zog.\n";
}

Peon::~Peon(void)
{
	std::cout << "Bleuark...\n";
}

std::ostream	&operator<<(std::ostream &os, const Peon &vic)
{
	os << "I'm " << vic.getName() << " and I like otters!\n";
	return os;
}

Peon	&Peon::operator=(const Peon &it)
{
	this->name = it.name;
	return *this;
}

void            Peon::getPolymorphed(void) const
{
	std::cout << name << " has been turned into a pink pony!\n";
}
