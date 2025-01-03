/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:03:03 by debian            #+#    #+#             */
/*   Updated: 2024/11/14 09:27:12 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <string>
#include "Brain.hpp"

class	Animal {

public:

	Animal( void );
	Animal( std::string type );
	Animal( Animal const & src );
	virtual ~Animal( void );

	Animal			&operator=( Animal const & rhs );

	std::string		getType( void ) const;

	virtual void	makeSound( void ) const;

	virtual void	displayIdeas( void ) const;

protected:

	std::string		type;
	
};

#endif