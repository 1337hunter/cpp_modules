/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:30:07 by gbright           #+#    #+#             */
/*   Updated: 2020/09/24 22:24:46 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class	Peon: public Victim
{
	public:
				Peon(void);
				Peon(std::string name);
				Peon(const Peon &);
		virtual		~Peon(void);
		void		getPolymorphed(void) const;
		Peon		&operator=(const Peon &);
};

std::ostream	&operator<<(std::ostream &os, const Peon &vic);

#endif
