/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testMateriaCopyByConstructor.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 06:53:14 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 03:14:18 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testCopyByConstructor(Ice ice, Cure cure)
{
	// Display of iceCpy and cureCpy attributes

	std::cout << std::endl;

	std::cout << "ice.getId() : " << ice.getId() << std::endl;
	std::cout << "ice.getType() : " << ice.getType() << std::endl;
	std::cout << std::endl;
	std::cout << "cure.getId() : " << cure.getId() << std::endl;
	std::cout << "cure.getType() : " << cure.getType() << std::endl;

	std::cout << std::endl;
	
	return ;
}

void    testMateriaCopyByConstructor() {

    std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Test materia copy by constructor" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;

	// Creation of 2 materia instances (that will be copied)
	
	Ice			ice;
	std::cout << std::endl;
	Cure		cure;
	std::cout << std::endl;

	// Display of ice and cure attributes

	std::cout << "ice.getId() : " << ice.getId() << std::endl;
	std::cout << "ice.getType() : " << ice.getType() << std::endl;
	std::cout << std::endl;
	std::cout << "cure.getId() : " << cure.getId() << std::endl;
	std::cout << "cure.getType() : " << cure.getType() << std::endl;

	// Copy of materias using constructor
	// CAN'T ASSIGN A TYPE CURE TO A TYPE ICE (AND SAME IN REVERSE ORDER)

	std::cout << std::endl;
	
	testCopyByConstructor(ice, cure);
	    
    return ;
}