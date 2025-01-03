/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testAnimalCopyByAffectation.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/19 08:51:48 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testAnimalCopyByAffectation() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by affectation from Animal" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
		
	// Creation of an animal instance (will be copied)
	
	Animal	animal1;
	std::cout << std::endl;

	// Display of animal1 type

	std::cout << "Animal1 type : " << animal1.getType() << std::endl;
	std::cout << std::endl;

	// Creation of an animal instance (copy)
	
	Animal	animal2;
	animal2 = animal1;

	std::cout << std::endl;

	// Display of animal2 type

	std::cout << "Animal2 type : " << animal2.getType() << std::endl;
	
	std::cout << std::endl;

	return ;
}