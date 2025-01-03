/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 01:55:27 by debian            #+#    #+#             */
/*   Updated: 2024/11/15 01:58:04 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_H__
#define __CURE_H__

#include "AMateria.hpp"
#include "ICharacter.hpp"

class   Cure : public AMateria {

public:

    Cure( void );
    Cure( Cure const & src);
    ~Cure( void );

    Cure        &operator=( Cure const & rhs );

    AMateria*   clone( void ) const;

    void        use(ICharacter& target);
    
};

#endif