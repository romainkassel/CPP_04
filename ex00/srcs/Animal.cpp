/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:44:59 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 12:03:53 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal( void ) : type("Animal")
{
    std::cout << "Default constructor (void) from class Animal called" << std::endl;
    return ;
}

Animal::Animal( std::string type ) : type(type)
{
    std::cout << "Default constructor (type) from class Animal called" << std::endl;
    return ;
}

Animal::Animal( Animal const & src )
{
    std::cout << "Constructor by copy from class Animal called" << std::endl;
    this->type = src.getType();
    return ;
}

Animal::~Animal( void )
{
    std::cout << "Destructor from class Animal called" << std::endl;
    return ;
}

Animal		&Animal::operator=( Animal const & rhs )
{
    (void)rhs;
    return (*this);
}

std::string Animal::getType( void ) const
{
    return (this->type);
}

void	Animal::makeSound( void ) const
{
    std::cout << "Animal noise!" << std::endl;
}