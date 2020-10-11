/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 09:11:21 by gbright           #+#    #+#             */
/*   Updated: 2020/09/11 10:54:38 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <string>

class	ZombieEvent
{
		Zombie	*one;
	public:
		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
};
#endif
