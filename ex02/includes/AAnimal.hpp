/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:03:03 by debian            #+#    #+#             */
/*   Updated: 2024/11/14 09:27:12 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AANIMAL_H__
#define __AANIMAL_H__

#include <string>
#include "Brain.hpp"

class	AAnimal {

public:

	AAnimal( void );
	AAnimal( std::string type );
	AAnimal( AAnimal const & src );
	virtual ~AAnimal( void );

	AAnimal			&operator=( AAnimal const & rhs );

	std::string		getType( void ) const;

	virtual void	makeSound( void ) const = 0;

	virtual void	displayIdeas( void ) const = 0;

protected:

	std::string		type;
	
};

#endif