/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:44:59 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 09:30:53 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain( void )
{
    std::cout << "Default constructor from class Brain called" << std::endl;
    return ;
}

Brain::Brain( Brain const & src )
{
    int i;
    
    std::cout << "Constructor by copy from class Brain called" << std::endl;
    
    for (i = 0; i < 100; i++)
        this->ideas[i] = src.getIdea(i);
    
    return ;
}

Brain::~Brain( void )
{
    std::cout << "Destructor from class Brain called" << std::endl;
    return ;
}

Brain		&Brain::operator=( Brain const & rhs )
{
    int i;
    
    for (i = 0; i < 100; i++)
        this->ideas[i] = rhs.getIdea(i);
    
    return (*this);
}

void        Brain::setIdea( std::string idea, int i)
{
    this->ideas[i] = idea;
    return ;
}

std::string Brain::getIdea( int i ) const
{
    return (this->ideas[i]);
}