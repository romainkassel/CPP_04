/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testCharacterEquip.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 06:53:14 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 03:31:22 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void    testCharacterEquip() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check character equip" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;

	Character	character1( "CharacterName1" );
	Character	character2( "CharacterName2" );

	std::cout << std::endl;
	Ice*	materia1 = new Ice();
	std::cout << std::endl;
	Cure*	materia2 = new Cure();
	std::cout << std::endl;
	Ice*	materia3 = new Ice();
	std::cout << std::endl;
	Cure*	materia4 = new Cure();
	std::cout << std::endl;
	Cure*	materia5 = new Cure();
	std::cout << std::endl;

	// Check to see that inventory is empty at the construction of character

	character1.use(0, character2);
	character1.use(1, character2);
	character1.use(2, character2);
	character1.use(3, character2);

	std::cout << std::endl;

	// check equip with available place within inventory

	character1.equip(materia1);
	character1.equip(materia2);
	character1.equip(materia3);
	character1.equip(materia4);

	// check equip when inventory is full
	
	std::cout << std::endl;
	character1.equip(materia5);
	std::cout << std::endl;

	// check equip when index 3 is empty within inventory

	character1.unequip(2);
	character1.equip(materia3);
	character1.use(2, character2);
	
	std::cout << std::endl;

	delete (materia5);
    
    return ;
}