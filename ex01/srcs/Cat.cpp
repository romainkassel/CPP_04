/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:44:59 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 10:06:05 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>
#include <sstream>

Cat::Cat( void ) : Animal("Cat"), brain(new Brain())
{
    std::cout << "Default constructor from class Cat called" << std::endl;

    int                 i;
    std::stringstream   ss;

    for (i = 1; i <= 100; i++)
    {
        ss.str("");
        if (i < 10)
            ss << 0;
        if (i < 100)
            ss << 0;
        ss << i;
        this->brain->setIdea( "Idea " + ss.str() + " from Cat", i - 1 );
    }
    return ;
}

Cat::Cat( Cat const & src ) : Animal(src)
{
    int i;
    
    std::cout << "Constructor by copy from class Cat called" << std::endl;

    this->brain = new Brain();
    
    for (i = 0; i < 100; i++)
        this->brain->setIdea(src.getIdea(i), i);
    
    return ;
}

Cat::~Cat( void )
{
    std::cout << "Destructor from class Cat called" << std::endl;
    delete(this->brain);
    return ;
}

Cat		&Cat::operator=( Cat const & rhs )
{
    int i;
    
    for (i = 0; i < 100; i++)
        this->brain->setIdea(rhs.getIdea(i), i);
    
    return (*this);
}

void	Cat::makeSound( void ) const
{
    std::cout << "Miaou!" << std::endl;
    return ;
}

void    Cat::displayIdeas( void ) const
{
    int i;

    for ( i = 0; i < 25; i++) 
    {
        std::cout << "ideas[";
        if (i < 10)
            std::cout << 0;
        std::cout << i << "] : ";
        std::cout << this->brain->getIdea( i ) << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "..." << std::endl;
    std::cout << std::endl;
    
    for ( i = 74; i < 100; i++) 
    {
        std::cout << "ideas[";
        if (i < 10)
            std::cout << 0;
        std::cout << i << "] : ";
        std::cout << this->brain->getIdea( i ) << std::endl;
    }
    return ;
}

void    Cat::setIdea( std::string idea, int i )
{
    this->brain->setIdea(idea, i);
    return ;
}

std::string Cat::getIdea( int i ) const
{
    return (this->brain->getIdea(i));
}