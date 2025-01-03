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

#ifndef __MATERIASOURCE_H__
#define __MATERIASOURCE_H__

#include "IMateriaSource.hpp"

class   MateriaSource : public IMateriaSource {

public:

    MateriaSource( void );
    MateriaSource( MateriaSource const & src);
    ~MateriaSource( void );

    MateriaSource   &operator=( MateriaSource const & rhs );

    void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);

    AMateria* getMateriaFromInventory( int idx );

private:

    AMateria*   _inventory[4];
    
};

#endif