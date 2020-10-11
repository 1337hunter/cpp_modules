/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 21:29:22 by gbright           #+#    #+#             */
/*   Updated: 2020/09/23 16:58:05 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap
{
	public:
			NinjaTrap(void);
			NinjaTrap(std::string name);
			~NinjaTrap(void);
			NinjaTrap(const NinjaTrap &);
		NinjaTrap	&operator=(const NinjaTrap &);
		void	ninjaShoebox(FragTrap &itsatrap);
		void    ninjaShoebox(ScavTrap &itsatrap);
		void    ninjaShoebox(NinjaTrap &itsatrap);
};

#endif
