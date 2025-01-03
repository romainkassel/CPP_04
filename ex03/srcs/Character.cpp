/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:44:59 by debian            #+#    #+#             */
/*   Updated: 2024/11/15 01:51:08 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Header.hpp"
#include <iostream>

Character::Character( void )
{
    int i;

    if (VERBOSE == 1)
        std::cout << "Default constructor (void) from Character called" << std::endl;
    for (i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    return ;
}

Character::Character( std::string name ) : _name(name)
{
    int i;

    if (VERBOSE == 1)
        std::cout << "Default constructor (std::string name) from Character called" << std::endl;
    for (i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    return ;
}

Character::Character( Character const & src )
{
    int i;

    if (VERBOSE == 1)
        std::cout << "Copy constructor from Character called" << std::endl;

    this->_name = src.getName();

    for (i = 0; i < 4; i++)
    {
        if (src._inventory[i])
            this->_inventory[i] = src._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }

    return ;
}

Character::~Character( void )
{
    int i;

    if (VERBOSE == 1)
        std::cout << "Destructor from Character " << this->_name << " called" << std::endl;

    for (i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete(this->_inventory[i]);
    }

    return ;
}

Character   &Character::operator=( Character const & rhs )
{
    int i;

    this->_name = rhs.getName();

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

std::string const & Character::getName() const
{
    return (this->_name);
}

void        Character::equip(AMateria* m)
{
    int i;

    for (i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            if (VERBOSE == 1)
                std::cout << "Character " << this->_name << " added materia #" << m->getId() << " of type " << m->getType() << " in its inventory (index " << i << ")" << std::endl;
            return ;
        }
    }
    if (VERBOSE == 1)
    {
        std::cout << "Character " << this->_name << " can't equip materia #" << m->getId() << " of type " << m->getType() << std::endl;
        std::cout << "No space left in the inventory!" << std::endl;
    }
    return ;
} 

void        Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
    {
        if (VERBOSE == 1)
            std::cout << "This location does not exist in the inventory!" << std::endl;
    }
    else if (this->_inventory[idx] == NULL)
    {
        if (VERBOSE == 1)
            std::cout << "This location is empty, no materia to remove here!" << std::endl;
    }
    else
    {
        if (VERBOSE == 1)
            std::cout << "Character " << this->_name << " removed materia #" << this->_inventory[idx]->getId() << " of type " << this->_inventory[idx]->getType() << " from its inventory (index " << idx << ")" << std::endl;
        this->_inventory[idx] = NULL;
    }
    return ;
}

void        Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
    {
        if (VERBOSE == 1)
            std::cout << "This location does not exist in the inventory!" << std::endl;
    }
    else if (this->_inventory[idx] == NULL)
    {
        if (VERBOSE == 1)
            std::cout << "This location is empty, no materia to use here!" << std::endl;
    }
    else
        this->_inventory[idx]->use(target);
    return ;
}

AMateria* Character::getMateriaFromInventory( int idx )
{
    return (this->_inventory[idx]);
}