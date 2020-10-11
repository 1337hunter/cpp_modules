/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 13:53:10 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 23:52:00 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"
# include <iostream>

class AssaultTerminator: public ISpaceMarine
{
	public:
					AssaultTerminator(void);
					~AssaultTerminator(void);
		AssaultTerminator	&operator=(const AssaultTerminator &);
					AssaultTerminator(const AssaultTerminator &);
		ISpaceMarine		*clone(void) const;
		void			battleCry(void) const;
		void			rangedAttack(void) const;
		void			meleeAttack(void) const;
};

#endif
