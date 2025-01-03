/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:47:56 by debian            #+#    #+#             */
/*   Updated: 2024/11/14 06:09:06 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"

class   Dog : public Animal {

public:

	Dog( void );
	Dog( Dog const & src );
	~Dog( void );

	Dog		        &operator=( Dog const & rhs );

    virtual void    makeSound( void ) const;
    
};

#endif