/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 01:55:27 by debian            #+#    #+#             */
/*   Updated: 2024/11/18 03:30:58 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_H__
#define __ICE_H__

#include "AMateria.hpp"
#include "ICharacter.hpp"

class   Ice : public AMateria {

public:

    Ice( void );
    Ice( Ice const & src);
    ~Ice( void );

    Ice &operator=( Ice const & rhs );

    AMateria*   clone( void ) const;

    void        use(ICharacter& target);
    
};

#endif