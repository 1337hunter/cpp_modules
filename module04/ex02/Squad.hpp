/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 10:16:15 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 23:41:40 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad: public ISquad
{
		int		counter;
		ISpaceMarine	**unit;
	public:
				Squad(void);
				Squad(const ISquad &);
				~Squad(void);
		int		getCount(void) const;
		ISpaceMarine	*getUnit(int) const;
		int		push(ISpaceMarine *);
		void		operator=(const Squad &obj);
};

#endif
