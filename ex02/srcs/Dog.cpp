/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:44:59 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 11:33:48 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>
#include <sstream>

Dog::Dog( void ) : AAnimal("Dog"), brain(new Brain())
{
   std::cout << "Default constructor from class Dog called" << std::endl;

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
        this->brain->setIdea( "Idea " + ss.str() + " from Dog", i - 1 );
    }
    return ;
}
Dog::Dog( Dog const & src ) : AAnimal(src)
{
    int i;
    
    std::cout << "Constructor by copy from class Dog called" << std::endl;

    this->brain = new Brain();
    
    for (i = 0; i < 100; i++)
        this->brain->setIdea(src.getIdea(i), i);
    
    return ;
}

Dog::~Dog( void )
{
    std::cout << "Destructor from class Dog called" << std::endl;
    delete(this->brain);
    return ;
}

Dog		&Dog::operator=( Dog const & rhs )
{
    int i;
    
    for (i = 0; i < 100; i++)
        this->brain->setIdea(rhs.getIdea(i), i);
    
    return (*this);
}

void	Dog::makeSound( void ) const
{
    std::cout << "Waouf!" << std::endl;
    return ;
}

void    Dog::displayIdeas( void ) const
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
}

void    Dog::setIdea( std::string idea, int i )
{
    this->brain->setIdea(idea, i);
    return ;
}

std::string Dog::getIdea( int i ) const
{
    return (this->brain->getIdea(i));
}