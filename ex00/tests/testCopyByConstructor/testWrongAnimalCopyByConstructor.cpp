/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testWrongAnimalCopyByConstructor.cpp               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/19 10:11:40 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testCopyByConstructor(WrongAnimal wrongAnimal1) {

	std::cout << std::endl;
	
	// Display of wrongAnimal1 type

	std::cout << "WrongAnimal1 type : " << wrongAnimal1.getType() << std::endl;
	std::cout << std::endl;
	
	return ;
}

void	testWrongAnimalCopyByConstructor() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by constructor from WrongAnimal" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
	
	// Creation of an WrongAnimal instance (will be copied)
	
	WrongAnimal	wrongAnimal1;
	std::cout << std::endl;

	// Display of wrongAnimal1 type

	std::cout << "WrongAnimal1 type : " << wrongAnimal1.getType() << std::endl;
	std::cout << std::endl;

	testCopyByConstructor(wrongAnimal1);

	return ;
}