/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 16:17:45 by gbright           #+#    #+#             */
/*   Updated: 2020/09/25 11:53:08 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	private:
		std::string	_type;
		unsigned int	_xp;
	public:
					AMateria(std::string const &type);
					AMateria(void);
		virtual			~AMateria(void);
					AMateria(const AMateria &);
					AMateria(std::string const &, unsigned int);
		void			setType(std::string const &);
		void			setXP(unsigned int);
		void			operator=(const AMateria &);
		unsigned int		getXP(void) const;
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
		std::string const       &getType(void) const;
};

#endif
