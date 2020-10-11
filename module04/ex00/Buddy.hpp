/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Buddy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:30:07 by gbright           #+#    #+#             */
/*   Updated: 2020/09/24 22:25:01 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUDDY_HPP
# define BUDDY_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Buddy: public Victim
{
	public:
				Buddy(void);
				Buddy(std::string name);
				Buddy(const Buddy &);
		virtual		~Buddy(void);
		void		getPolymorphed(void) const;
		Buddy	&operator=(const Buddy &);
};

std::ostream	&operator<<(std::ostream &os, const Buddy &vic);

#endif
