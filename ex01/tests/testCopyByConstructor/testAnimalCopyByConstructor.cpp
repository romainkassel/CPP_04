/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testAnimalCopyByConstructor.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/19 09:26:43 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testCopyByConstructor(Animal animal1) {

	std::cout << std::endl;
	
	// Display of animal1 type

	std::cout << "Animal1 type : " << animal1.getType() << std::endl;
	std::cout << std::endl;
	
	return ;
}

void	testAnimalCopyByConstructor() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by constructor from Animal" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
		
	// Creation of an animal instance (will be copied)
	
	Animal	animal1;
	std::cout << std::endl;

	// Display of animal1 type

	std::cout << "Animal1 type : " << animal1.getType() << std::endl;
	std::cout << std::endl;

	testCopyByConstructor(animal1);

	return ;
}