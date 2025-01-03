/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:47:56 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 11:32:53 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__

#include "AAnimal.hpp"
#include "Brain.hpp"

class   Dog : public AAnimal {

public:

	Dog( void );
	Dog( Dog const & src );
	~Dog( void );

	Dog		        &operator=( Dog const & rhs );

    virtual void    makeSound( void ) const;

	void			displayIdeas( void ) const;
	void			setIdea( std::string idea, int i );
	std::string		getIdea( int i ) const;

private:

	Brain*			brain;
    
};

#endif