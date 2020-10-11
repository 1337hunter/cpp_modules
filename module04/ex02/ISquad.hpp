/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 09:52:10 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 23:42:21 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include  "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual			~ISquad(void) {}
		virtual	int		getCount(void) const = 0;
		virtual	ISpaceMarine*	getUnit(int) const = 0;
		virtual	int		push(ISpaceMarine*) = 0;
	//	virtual void		operator=(const ISquad &) = 0;
};

#endif
