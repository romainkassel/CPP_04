/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:03:03 by debian            #+#    #+#             */
/*   Updated: 2024/11/14 06:07:32 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <string>

class	Animal {

public:

	Animal( void );
	Animal( std::string type );
	Animal( Animal const & src );
	virtual ~Animal( void );

	Animal			&operator=( Animal const & rhs );

	std::string		getType( void ) const;

	virtual void	makeSound( void ) const;

protected:

	std::string	type;
	
};

#endif