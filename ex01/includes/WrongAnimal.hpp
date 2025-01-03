/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:03:03 by debian            #+#    #+#             */
/*   Updated: 2024/11/14 06:28:21 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <string>

class	WrongAnimal {

public:

	WrongAnimal( void );
	WrongAnimal( std::string type );
	WrongAnimal( WrongAnimal const & src );
	~WrongAnimal( void );

	WrongAnimal	&operator=( WrongAnimal const & rhs );

	std::string	getType( void ) const;

	void		makeSound( void ) const;

protected:

	std::string	type;
	
};

#endif