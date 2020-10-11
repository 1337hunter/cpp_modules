/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 20:50:53 by gbright           #+#    #+#             */
/*   Updated: 2020/09/23 16:36:36 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>

class ScavTrap
{
		int		hp;
		int		max_hp;
		int		energyp;
		int		max_energyp;
		int		level;
		std::string	name;
		int		melee_attack_dmg;
		int		ranged_attack_dmg;
		int		armor_dmg_reduction;
		std::string	challenge[7];
	public:
			ScavTrap(void);
			ScavTrap(std::string name);
			~ScavTrap(void);
			ScavTrap(const ScavTrap &);
		ScavTrap	&operator=(const ScavTrap &);
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewcomer(void);
};

#endif
