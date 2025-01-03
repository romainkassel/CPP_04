/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:44:59 by debian            #+#    #+#             */
/*   Updated: 2024/11/14 06:10:48 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal")
{
    std::cout << "Default constructor (void) from class WrongAnimal called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal( std::string type ) : type(type)
{
    std::cout << "Default constructor (type) from class WrongAnimal called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
    std::cout << "Constructor by copy from class WrongAnimal called" << std::endl;
    this->type = src.getType();
    return ;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "Destructor from class WrongAnimal called" << std::endl;
    return ;
}

WrongAnimal		&WrongAnimal::operator=( WrongAnimal const & rhs )
{
    (void)rhs;
    return (*this);
}

std::string WrongAnimal::getType( void ) const
{
    return (this->type);
}

void	WrongAnimal::makeSound( void ) const
{
    std::cout << "WrongAnimal noise!" << std::endl;
}