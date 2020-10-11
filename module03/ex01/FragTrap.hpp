/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 20:50:53 by gbright           #+#    #+#             */
/*   Updated: 2020/09/23 16:34:46 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>

class FragTrap
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
		std::string	attack[7];
	public:
			FragTrap(void);
			FragTrap(std::string name);
			~FragTrap(void);
			FragTrap(const FragTrap &);
		FragTrap	&operator=(const FragTrap &);
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const &target);

};


#endif
