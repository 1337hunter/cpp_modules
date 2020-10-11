/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:17:34 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 23:35:03 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
				SuperMutant(void);
				~SuperMutant(void);
				SuperMutant(const SuperMutant &);
		SuperMutant	&operator=(const SuperMutant &);
		void		takeDamage(int);

};

#endif
