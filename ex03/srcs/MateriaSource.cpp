/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:44:59 by debian            #+#    #+#             */
/*   Updated: 2024/11/15 01:51:08 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Header.hpp"
#include <iostream>

MateriaSource::MateriaSource( void )
{
    int i;

    if (VERBOSE == 1)
        std::cout << "Default constructor from MateriaSource called" << std::endl;
    for (i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    return ;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
    int i;

    if (VERBOSE == 1)
        std::cout << "Copy constructor from MateriaSource called" << std::endl;

    for (i = 0; i < 4; i++)
    {
        if (src._inventory[i])
            this->_inventory[i] = src._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }

    return ;
}

MateriaSource::~MateriaSource( void )
{
    int i;

    if (VERBOSE == 1)
        std::cout << "Destructor from MateriaSource called" << std::endl;

    for (i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete(this->_inventory[i]);
    }

    return ;
}

MateriaSource    &MateriaSource::operator=( MateriaSource const & rhs )
{
    int i;

    for (i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete (this->_inventory[i]);
    }

    for (i = 0; i < 4; i++)
    {
        if (rhs._inventory[i])
            this->_inventory[i] = rhs._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }

    return (*this);
}

void    MateriaSource::learnMateria(AMateria* m)
{
    int i;

    for (i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m->clone();
            if (VERBOSE == 1)
                std::cout << "Materia #" << m->getId() << " of type " << m->getType() << " has been copied in memory into MateriaSource's inventory (index " << i << ")" << std::endl;
            if (m)
                delete (m);
            return ;
        }
    }
    if (VERBOSE == 1)
        std::cout << "MateriaSource's inventory is full, can't copy materia #" << m->getId() << " of type " << m->getType() << " in it's inventory" << std::endl;
    if (m)
        delete (m);
    return ;
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    int i;

    if (type != "ice" && type != "cure")
    {
        if (VERBOSE == 1)
        {
            std::cout << "The type " << type << " does not exist for Materia!" << std::endl;
            std::cout << "It should be 'ice' or 'cure'" << std::endl;
        }
        return (0);
    }
    for (i = 0; i < 4; i++)
    {
        if (this->_inventory[i] && this->_inventory[i]->getType() == type)
        {
            if (VERBOSE == 1)
                std::cout << "A copy of Materia of type " << type << " has been created from MateriaSource " << std::endl;
            return (this->_inventory[i]->clone());
        }
    }
    if (VERBOSE == 1)
        std::cout << "No Materia of type " << type << " has been learned by MateriaSource " << std::endl;
    return (0);
}

AMateria* MateriaSource::getMateriaFromInventory( int idx )
{
    return (this->_inventory[idx]);
}