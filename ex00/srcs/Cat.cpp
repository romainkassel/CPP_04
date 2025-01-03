/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:44:59 by debian            #+#    #+#             */
/*   Updated: 2024/11/14 06:08:35 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ) : Animal("Cat")
{
    std::cout << "Default constructor from class Cat called" << std::endl;
    return ;
}
Cat::Cat( Cat const & src ) : Animal(src)
{
    std::cout << "Constructor by copy from class Cat called" << std::endl;
    (void)src;
    return ;
}

Cat::~Cat( void )
{
    std::cout << "Destructor from class Cat called" << std::endl;
    return ;
}

Cat		&Cat::operator=( Cat const & rhs )
{
    (void)rhs;
    return (*this);
}

void	Cat::makeSound( void ) const
{
    std::cout << "Miaou!" << std::endl;
}