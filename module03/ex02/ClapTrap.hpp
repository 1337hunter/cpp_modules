/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 19:37:42 by gbright           #+#    #+#             */
/*   Updated: 2020/09/15 19:58:58 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class	ClapTrap
{
	protected:
		int		hp;
		int		max_hp;
		int		energyp;
		int		max_energyp;
		int		level;
		std::string	name;
		int		melee_attack_dmg;
		int		ranged_attack_dmg;
		int		armor_dmg_reduction;
		std::string	justfun[7];
	public:
			ClapTrap(void);
			~ClapTrap(void);
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
