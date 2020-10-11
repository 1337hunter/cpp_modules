/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 14:43:53 by gbright           #+#    #+#             */
/*   Updated: 2020/09/23 17:46:43 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	name = "void";
	title = "undefined";
	std::cout << name << ", " <<  title << ", " <<  "is born!\n";
}

Sorcerer::Sorcerer(std::string s1, std::string s2)
{
	name = s1;
	title = s2;
	std::cout << name << ", " <<  title << ", " <<  "is born!\n";
}

Sorcerer::Sorcerer(const Sorcerer &what)
{
	this->name = what.getName();
	this->title = what.getTitle();
}

Sorcerer::~Sorcerer(void)
{
	 std::cout << name << ", " <<  title << ", " << "is dead. ";
	 std::cout << "Consequences will never be the same!\n";
}

std::string	Sorcerer::getName(void) const
{
	return name;
}

std::string	Sorcerer::getTitle(void) const
{
	return title;
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &what)
{
	name = what.getName();
	title = what.getTitle();
	return *this;
}

std::ostream	&operator<<(std::ostream &os, const Sorcerer &sorc)
{
	os << "I am " << sorc.getName()<< ", " << sorc.getTitle() << ", ";
	os << "and I like ponies!\n";
	return os;
}

void		Sorcerer::polymorph(Victim const &vic) const
{
	vic.getPolymorphed();
}

void		Sorcerer::polymorph(Peon const &what) const
{
	what.getPolymorphed();
}
