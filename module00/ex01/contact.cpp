/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 11:42:25 by gbright           #+#    #+#             */
/*   Updated: 2020/09/09 16:12:34 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>
#include <iomanip>

void	contact::create(void)
{
	std::cout << "To add a contact into the phonebook enter the folowing:\n";
	std::cout << "first name: ";
	std::cin >> fname;
	std::cout << "last name: ";
	std::cin >> lname;
	std::cout << "nickname: ";
	std::cin >> nickname;
	std::cout << "login: ";
	std::cin >> login;
	std::cout << "postal address: ";
	std::cin >> postal_address;
	std::cout << "email address: ";
	std::cin >> email;
	std::cout << "phone number: ";
	std::cin >> phone;
	std::cout << "birthday date: ";
	std::cin >> birthday;
	std::cout << "favorite meal: ";
	std::cin >> favorite_meal;
	std::cout << "underwear color: ";
	std::cin >> underwear_color;
	std::cout << "darkest secret: ";
	std::cin >> darkest_secret;
}

void	contact::print_contact(int index)
{
	std::cout << std::right << std::setw(10) << std::setfill(' ') << index;
	std::cout << '|';
	if (fname.size() > 10)
		std::cout << std::right << std::setw(9) << std::setfill(' ') <<
		fname.substr(0, 9) << ".";
	else
		std::cout << std::right << std::setw(10) << std::setfill(' ') <<
                fname.substr(0, 10);
	std::cout << '|';
	if (lname.size() > 10)
                std::cout << std::right << std::setw(9) << std::setfill(' ') <<
                lname.substr(0, 9) << ".";
        else
                std::cout << std::right << std::setw(10) << std::setfill(' ') <<
                lname.substr(0, 10);
	std::cout << '|';
	if (nickname.size() > 10)
                std::cout << std::right << std::setw(9) << std::setfill(' ') <<
                nickname.substr(0, 9) << ".";
        else
                std::cout << std::right << std::setw(10) << std::setfill(' ') <<
                nickname.substr(0, 10);
	std::cout << std::endl;
}

void	contact::print_per_line(void)
{
	std::cout << "first name: " << fname << std::endl;
        std::cout << "last name: " << lname << std::endl;
        std::cout << "nickname: " << nickname << std::endl;
        std::cout << "login: " << login << std::endl;
        std::cout << "postal address: " << postal_address << std::endl;
        std::cout << "email: " << email << std::endl;
	std::cout << "phone: " << phone << std::endl;
	std::cout << "birthday day: : " << birthday << std::endl;
 	std::cout << "favorite meal: " << favorite_meal << std::endl;
	std::cout << "underwear color: " << underwear_color << std::endl;
	std::cout << "darkest secret: " << darkest_secret << std::endl;
}
