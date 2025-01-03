/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testWrongAnimalCopyByAffectation.cpp               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/19 08:56:44 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testWrongAnimalCopyByAffectation() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by affectation from WrongAnimal" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
		
	// Creation of an WrongAnimal instance (will be copied)
	
	WrongAnimal	wrongAnimal1;
	std::cout << std::endl;

	// Display of wrongAnimal1 type

	std::cout << "WrongAnimal1 type : " << wrongAnimal1.getType() << std::endl;
	std::cout << std::endl;

	// Creation of an WrongAnimal instance (copy)
	
	WrongAnimal	wrongAnimal2;
	wrongAnimal2 = wrongAnimal1;

	std::cout << std::endl;

	// Display of wrongAnimal2 type

	std::cout << "WrongAnimal2 type : " << wrongAnimal2.getType() << std::endl;
	
	std::cout << std::endl;

	return ;
}