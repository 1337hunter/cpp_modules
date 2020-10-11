/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 19:51:40 by gbright           #+#    #+#             */
/*   Updated: 2020/09/23 20:31:32 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class	Character
{
private:
	std::string	name;
	int		ap;
	AWeapon		*weapon;
public:
				Character(std::string const & name);
				Character(void);
				~Character(void);
				Character(const Character &);
	Character		&operator=(const Character &);
	void			recoverAP(void);
	void			equip(AWeapon *);
	void			attack(Enemy *);
	std::string const 	&getName(void) const;
	int			getAP(void) const;
	AWeapon			*getWeapon(void) const;
};
std::ostream	&operator<<(std::ostream &os, const Character &hero);
#endif
