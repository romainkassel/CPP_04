/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:47:56 by debian            #+#    #+#             */
/*   Updated: 2024/11/14 06:08:31 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"

class   Cat : public Animal {

public:

	Cat( void );
	Cat( Cat const & src );
	~Cat( void );

	Cat				&operator=( Cat const & rhs );

	virtual void	makeSound( void ) const;
    
};

#endif