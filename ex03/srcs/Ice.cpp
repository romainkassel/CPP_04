/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:44:59 by debian            #+#    #+#             */
/*   Updated: 2024/11/15 01:51:08 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Header.hpp"
#include <iostream>

Ice::Ice( void ) : AMateria("ice")
{
    if (VERBOSE == 1)
        std::cout << "Default constructor from Ice called" << std::endl;
    return ;
}

Ice::Ice( Ice const & src ) : AMateria()
{
    if (VERBOSE == 1)
        std::cout << "Copy constructor from Ice called" << std::endl;
    this->_type = src.getType();
    return ;
}

Ice::~Ice( void )
{
    if (VERBOSE == 1)
        std::cout << "Destructor from Ice called" << std::endl;
    return ;
}

Ice    &Ice::operator=( Ice const & rhs )
{
    (void)rhs;
    return (*this);
}

AMateria*   Ice::clone( void ) const
{
    AMateria*   newMateria = new Ice();
    if (VERBOSE == 1)
        std::cout << std::endl;
    if (VERBOSE == 1)
    {
        std::cout << "A materia has been cloned and a new materia has been created!" << std::endl;
        std::cout << "From Materia #" << this->_id << " of type " << this->_type  << std::endl;
        std::cout << "To Materia #" << newMateria->getId() << " of type " << newMateria->getType() << std::endl;
    }
    return (newMateria);
}

void        Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return ; 
}