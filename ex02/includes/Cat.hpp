/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:47:56 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 11:32:50 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__

#include "AAnimal.hpp"
#include "Brain.hpp"

class   Cat : public AAnimal {

public:

	Cat( void );
	Cat( Cat const & src );
	~Cat( void );

	Cat				&operator=( Cat const & rhs );

	virtual void	makeSound( void ) const;

	void			displayIdeas( void ) const;
	void			setIdea( std::string idea, int i );
	std::string		getIdea( int i ) const;

private:

	Brain*			brain;
    
};

#endif