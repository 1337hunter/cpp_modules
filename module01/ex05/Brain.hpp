/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 13:07:01 by gbright           #+#    #+#             */
/*   Updated: 2020/09/11 17:58:10 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <string>

class Brain
{
		int	value;
		int	complexity;
		int	yearsOld;

	public:
				Brain(void);
				Brain(int val, int comp, int years);
		const Brain 	*identify(void) const;
};

#endif
