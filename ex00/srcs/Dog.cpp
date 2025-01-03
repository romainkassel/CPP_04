/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:44:59 by debian            #+#    #+#             */
/*   Updated: 2024/11/14 06:09:14 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog( void ) : Animal("Dog")
{
    std::cout << "Default constructor from class Dog called" << std::endl;
    return ;
}
Dog::Dog( Dog const & src ) : Animal(src)
{
    std::cout << "Constructor by copy from class Dog called" << std::endl;
    (void)src;
    return ;
}

Dog::~Dog( void )
{
    std::cout << "Destructor from class Dog called" << std::endl;
    return ;
}

Dog		&Dog::operator=( Dog const & rhs )
{
    (void)rhs;
    return (*this);
}

void	Dog::makeSound( void ) const
{
    std::cout << "Waouf!" << std::endl;
}