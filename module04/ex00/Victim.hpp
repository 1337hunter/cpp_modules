/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:30:07 by gbright           #+#    #+#             */
/*   Updated: 2020/09/24 21:56:31 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>
#include <iostream>

class	Victim
{
	protected:
		std::string	name;
	public:
				Victim(std::string name);
				Victim(void);
				Victim(const Victim &what);
		virtual		~Victim(void);
		std::string	getName(void) const;
		virtual void	getPolymorphed(void) const;
		Victim		&operator=(const Victim &what);
};

std::ostream	&operator<<(std::ostream &os, const Victim &vic);

#endif
