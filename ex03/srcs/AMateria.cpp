/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:44:59 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 03:12:28 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

#include "ICharacter.hpp"
#include "Header.hpp"

int		AMateria::_sharedId = 0;

AMateria::AMateria( void )
{
    if (VERBOSE == 1)
        std::cout << "Default constructor (void) from AMateria called" << std::endl;
    this->_id = _sharedId++;
    return ;
}

AMateria::AMateria( std::string const & type ) : _type(type), _id(_sharedId++)
{
    if (VERBOSE == 1)
        std::cout << "Default constructor (std::string const & type) from AMateria called" << std::endl;
    return ;
}

AMateria::AMateria( AMateria const & src )
{
    if (VERBOSE == 1)
        std::cout << "Copy constructor from AMateria called" << std::endl;
    (void)src;
    return ;
}

AMateria::~AMateria( void )
{
    if (VERBOSE == 1)
    {
        std::cout << "Destructor from AMateria called" << std::endl;
        std::cout << std::endl;
    }
    return ;
}

AMateria    &AMateria::operator=( AMateria const & rhs )
{
    (void)rhs;
    return (*this);
}

std::string const & AMateria::getType( void ) const
{
    return (this->_type);
}

int AMateria::getId( void )
{
    return (this->_id);
}

/*void        AMateria::use(ICharacter& target)
{
    if (this->_type == "cure")
        std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    else
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return ; 
}*/