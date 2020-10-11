/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 20:50:23 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 12:43:55 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{
		std::string	_name;
		int		_boxCount;
		AMateria	**_box;
	public:
					Character(void);
					~Character(void);
					Character(std::string name);
					Character(const Character &obj);
		std::string const	&getName(void) const;
		void			equip(AMateria *m);
		void			unequip(int idx);
		void			use(int idx, ICharacter& target);
		void			operator=(const Character &obj);
};

#endif
