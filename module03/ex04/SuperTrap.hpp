/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 20:50:53 by gbright           #+#    #+#             */
/*   Updated: 2020/09/23 17:13:31 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <string>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap: public NinjaTrap, public FragTrap
{
	public:
			SuperTrap(void);
			SuperTrap(std::string name);
			~SuperTrap(void);
			SuperTrap(const SuperTrap &);
		SuperTrap	&operator=(const SuperTrap &);
		void	describe(void);
		void    rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
};


#endif
