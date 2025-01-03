/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testMateriaCopyByAffectation.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 06:53:14 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 02:51:14 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void    testMateriaCopyByAffectation() {

    std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Test materia copy by affectation" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;

	// Creation of 2 materia instances (that will be copied)
	
	Ice			ice;
	std::cout << std::endl;
	Cure		cure;
	std::cout << std::endl;

	// Creation of 2 materia instances (copies)
	
	Ice			iceCpy;
	std::cout << std::endl;
	Cure		cureCpy;
	std::cout << std::endl;

	// Display of ice and cure attributes

	std::cout << "ice.getId() : " << ice.getId() << std::endl;
	std::cout << "ice.getType() : " << ice.getType() << std::endl;
	std::cout << std::endl;
	std::cout << "cure.getId() : " << cure.getId() << std::endl;
	std::cout << "cure.getType() : " << cure.getType() << std::endl;

	// Copy of materias using affectation operator
	// CAN'T ASSIGN A TYPE CURE TO A TYPE ICE (AND SAME IN REVERSE ORDER)

	iceCpy = ice;
	cureCpy = cure;

	std::cout << std::endl;

	// Display of iceCpy and cureCpy attributes

	std::cout << "iceCpy.getId() : " << iceCpy.getId() << std::endl;
	std::cout << "iceCpy.getType() : " << iceCpy.getType() << std::endl;
	std::cout << std::endl;
	std::cout << "cureCpy.getId() : " << cureCpy.getId() << std::endl;
	std::cout << "cureCpy.getType() : " << cureCpy.getType() << std::endl;

	std::cout << std::endl;
    
    return ;
}