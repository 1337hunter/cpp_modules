/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Buddy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:41:06 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 10:12:31 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Buddy.hpp"

Buddy::Buddy(void): Victim()
{
	std::cout << "Hey buddy!.\n";
}

Buddy::Buddy(std::string s1): Victim(s1)
{
	std::cout << "Hey buddy!.\n";
}

Buddy::Buddy(const Buddy &it): Victim(it.name)
{
//	this->name = it.getName();
	std::cout << "Hey buddy!.\n";
}

Buddy::~Buddy(void)
{
	std::cout << "Tutu tata toto...\n";
}

std::ostream	&operator<<(std::ostream &os, const Buddy &vic)
{
	os << "I'm " << vic.getName() << " and I don't like to be victim\n";
	return os;
}

Buddy	&Buddy::operator=(const Buddy &it)
{
	name = it.getName();
	return *this;
}

void            Buddy::getPolymorphed(void) const
{
	std::cout << name << " has been turned into an enemy!\n";
}
