/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testCharacterCopyByConstructor.cpp                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 06:53:14 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 02:11:34 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testCopyByConstructor(Character character1, Character character2)
{
	// Tests of id and use to see if the copy worked

	std::cout << std::endl;
	
	std::cout << "Name of character1 is : " << character1.getName() << std::endl;
	std::cout << std::endl;
	character1.use(0, character2);
	std::cout << "Materia # from inventory idx 0 : " << character1.getMateriaFromInventory(0)->getId() << std::endl;
	std::cout << std::endl;
	character1.use(1, character2);
	std::cout << "Materia # from inventory idx 1 : " << character1.getMateriaFromInventory(1)->getId() << std::endl;
	std::cout << std::endl;
	character1.use(2, character2);
	std::cout << "Materia # from inventory idx 2 : " << character1.getMateriaFromInventory(2)->getId() << std::endl;
	
	std::cout << std::endl;
	
	return ;
}


void    testCharacterCopyByConstructor() {

    std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Test character copy by constructor" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;

	// Creation of 1 character instance (one that will be copied)
	
	Character	character1( "CharacterName1" );
	std::cout << std::endl;

	// Creation of 1 character instance (will be used as target)
	
	Character	character2( "CharacterName2" );
	std::cout << std::endl;

	// Creation of 4 materia instances

	Ice*	materia1 = new Ice();
	std::cout << std::endl;
	Cure*	materia2 = new Cure();
	std::cout << std::endl;
	Ice*	materia3 = new Ice();
	std::cout << std::endl;

	// Character equips the 4 previous materias within its inventory

	character1.equip(materia1);
	character1.equip(materia2);
	character1.equip(materia3);

	std::cout << std::endl;

	// Chec initial attributes and member function with character that will be copied

	std::cout << "Name of character1 is : " << character1.getName() << std::endl;
	std::cout << std::endl;
	character1.use(0, character2);
	std::cout << "Materia # from inventory idx 0 : " << character1.getMateriaFromInventory(0)->getId() << std::endl;
	std::cout << std::endl;
	character1.use(1, character2);
	std::cout << "Materia # from inventory idx 1 : " << character1.getMateriaFromInventory(1)->getId() << std::endl;
	std::cout << std::endl;
	character1.use(2, character2);
	std::cout << "Materia # from inventory idx 2 : " << character1.getMateriaFromInventory(2)->getId() << std::endl;

	std::cout << std::endl;

	// Copy of character using constructor

	testCopyByConstructor(character1, character2);
    
    return ;
}