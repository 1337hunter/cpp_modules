/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 10:08:58 by gbright           #+#    #+#             */
/*   Updated: 2020/09/18 10:11:10 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
	public:
		virtual			~ISpaceMarine() {};
		virtual ISpaceMarine*	clone() const = 0;
		virtual void		battleCry() const = 0;
		virtual void		rangedAttack() const = 0;
		virtual void		meleeAttack() const = 0;
};

#endif
