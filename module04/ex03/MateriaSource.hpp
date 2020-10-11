/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 22:48:11 by gbright           #+#    #+#             */
/*   Updated: 2020/09/22 00:17:40 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	**_box;
		int		_count;
	public:
				MateriaSource(void);
				~MateriaSource(void);
				MateriaSource(const MateriaSource &);
		MateriaSource	&operator=(const MateriaSource &);
		void		learnMateria(AMateria *);
		AMateria*	createMateria(std::string const &type);

};

#endif
