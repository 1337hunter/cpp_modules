/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 19:39:25 by gbright           #+#    #+#             */
/*   Updated: 2020/09/21 23:31:38 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class	RadScorpion: public Enemy
{
	public:
				RadScorpion(void);
				RadScorpion(const RadScorpion &);
		RadScorpion	&operator=(const RadScorpion &);
				~RadScorpion(void);
};

#endif
