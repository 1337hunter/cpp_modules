/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 17:45:52 by gbright           #+#    #+#             */
/*   Updated: 2020/09/22 00:02:35 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
				Cure(void);
				~Cure(void);
				Cure(const Cure &);
		Cure		&operator=(const Cure &);
				Cure(const AMateria &);
		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif
