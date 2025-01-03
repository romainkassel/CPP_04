/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:44:59 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 09:26:10 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal( void ) : type("AAnimal")
{
    std::cout << "Default constructor (void) from class AAnimal called" << std::endl;
    return ;
}

AAnimal::AAnimal( std::string type ) : type(type)
{
    std::cout << "Default constructor (type) from class AAnimal called" << std::endl;
    return ;
}

AAnimal::AAnimal( AAnimal const & src )
{
    std::cout << "Constructor by copy from class AAnimal called" << std::endl;
    this->type = src.getType();
    return ;
}

AAnimal::~AAnimal( void )
{
    std::cout << "Destructor from class AAnimal called" << std::endl;
    return ;
}

AAnimal		&AAnimal::operator=( AAnimal const & rhs )
{
    (void)rhs;
    return (*this);
}

std::string AAnimal::getType( void ) const
{
    return (this->type);
}