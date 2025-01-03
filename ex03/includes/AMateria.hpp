/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:03:03 by debian            #+#    #+#             */
/*   Updated: 2024/11/18 06:25:22 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include <string>

class	ICharacter;

class	AMateria {

private:

	static int	_sharedId;
	
protected:

	std::string _type;
	int			_id;

public:

	AMateria( void );
	AMateria( std::string const & type );
	AMateria( AMateria const & src );
	virtual ~AMateria( void );

	AMateria	&operator=( AMateria const & rhs );
	
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;

	int	getId( void );
	
};

#endif