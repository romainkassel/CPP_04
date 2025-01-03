/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testCharacterUnequip.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 06:53:14 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 03:44:56 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void    testCharacterUnequip() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check character unequip" << std::endl;
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

	// check to see that unequip on an empty inventory works well

	character1.unequip(0);
	character1.unequip(1);
	character1.unequip(2);
	character1.unequip(3);

	std::cout << std::endl;

	// check to see that unequip on unexisting index works well
	
	character1.unequip(4);
	character1.unequip(-1);

	std::cout << std::endl;

	// equip all inventory with materias

	character1.equip(materia1);
	character1.equip(materia2);
	character1.equip(materia3);
	character1.equip(materia4);

	std::cout << std::endl;

	// Check to see that materias work within inventory now

	character1.use(0, character2);
	character1.use(1, character2);
	character1.use(2, character2);
	character1.use(3, character2);

	std::cout << std::endl;

	// unequip all inventory

	character1.unequip(0);
	character1.unequip(1);
	character1.unequip(2);
	character1.unequip(3);

	std::cout << std::endl;

	// Check to see that inventory is now empty

	character1.use(0, character2);
	character1.use(1, character2);
	character1.use(2, character2);
	character1.use(3, character2);

	std::cout << std::endl;

	// Check to see that materias have not been deleted after unequip

	materia1->use(character1);
	std::cout << "materia1->getId() : " << materia1->getId() << std::endl;
	std::cout << "materia1->getType() : " << materia1->getType() << std::endl;
	std::cout << std::endl;
	materia2->use(character1);
	std::cout << "materia2->getId() : " << materia2->getId() << std::endl;
	std::cout << "materia2->getType() : " << materia2->getType() << std::endl;
	std::cout << std::endl;
	materia3->use(character1);
	std::cout << "materia3->getId() : " << materia3->getId() << std::endl;
	std::cout << "materia3->getType() : " << materia3->getType() << std::endl;
	std::cout << std::endl;
	materia4->use(character1);
	std::cout << "materia4->getId() : " << materia4->getId() << std::endl;
	std::cout << "materia4->getType() : " << materia4->getType() << std::endl;

	std::cout << std::endl;

	delete (materia1);
	delete (materia2);
	delete (materia3);
	delete (materia4);
    
    return ;
}