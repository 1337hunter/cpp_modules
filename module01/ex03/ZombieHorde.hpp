/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 09:11:21 by gbright           #+#    #+#             */
/*   Updated: 2020/09/11 12:06:20 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <string>

class	ZombieHorde
{
		Zombie	*set_of;
		int	Num;
	public:
			ZombieHorde(int N);
			~ZombieHorde(void);
		void	setZombieType(std::string type);
		int	getNum(void);
		void	announce(void);
};
#endif
