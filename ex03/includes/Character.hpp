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

#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include "ICharacter.hpp"
#include <string>

class   Character : public ICharacter {

public:

    Character( void );
    Character( std::string name );
    Character( Character const & src);
    ~Character( void );

    Character   &operator=( Character const & rhs );

    std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

    AMateria* getMateriaFromInventory( int idx );

private:

    std::string _name;
    AMateria*   _inventory[4];
    
};

#endif