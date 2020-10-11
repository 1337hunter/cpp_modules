/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 13:15:09 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 23:38:02 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"
# include <iostream>

class TacticalMarine: public ISpaceMarine
{
	public:
				TacticalMarine(void);
				TacticalMarine(const TacticalMarine &);
		TacticalMarine	&operator=(const TacticalMarine &);
				~TacticalMarine(void);
		ISpaceMarine	*clone(void) const;
		void		battleCry(void) const;
		void		rangedAttack(void) const;
		void		meleeAttack(void) const;
};

#endif
