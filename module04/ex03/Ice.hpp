/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 17:43:27 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 23:58:15 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria
{
	public:
				Ice(void);
				Ice(const AMateria &);
		Ice		&operator=(const Ice &);
				Ice(const Ice &);
				~Ice(void);
		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif
