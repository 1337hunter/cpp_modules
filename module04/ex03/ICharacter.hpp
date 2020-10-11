/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 20:45:23 by gbright           #+#    #+#             */
/*   Updated: 2020/09/18 22:37:39 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual 	~ICharacter() {}
		virtual 	std::string const & getName() const = 0;
		virtual void 	equip(AMateria *m) = 0;
		virtual void 	unequip(int idx) = 0;
		virtual void 	use(int idx, ICharacter& target) = 0;
};

#endif
