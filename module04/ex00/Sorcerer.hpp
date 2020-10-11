/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 14:38:17 by gbright           #+#    #+#             */
/*   Updated: 2020/09/24 22:11:16 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class	Sorcerer
{
		std::string	name;
		std::string	title;
				Sorcerer(void);
	public:
				Sorcerer(std::string name, std::string title);
				Sorcerer(const Sorcerer &what);
		virtual		~Sorcerer(void);
		std::string	getName(void) const;
		std::string	getTitle(void) const;
		void		polymorph(Victim const &what) const;
		void            polymorph(Peon const &what) const;
		Sorcerer	&operator=(const Sorcerer &);
};

std::ostream	&operator<<(std::ostream &os, const Sorcerer &sorc);

#endif
