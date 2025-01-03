/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:44:59 by debian            #+#    #+#             */
/*   Updated: 2024/11/14 06:17:04 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
    std::cout << "Default constructor from class WrongCat called" << std::endl;
    return ;
}
WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal(src)
{
    std::cout << "Constructor by copy from class WrongCat called" << std::endl;
    (void)src;
    return ;
}

WrongCat::~WrongCat( void )
{
    std::cout << "Destructor from class WrongCat called" << std::endl;
    return ;
}

WrongCat		&WrongCat::operator=( WrongCat const & rhs )
{
    (void)rhs;
    return (*this);
}

void	WrongCat::makeSound( void ) const
{
    std::cout << "Miaou!" << std::endl;
}