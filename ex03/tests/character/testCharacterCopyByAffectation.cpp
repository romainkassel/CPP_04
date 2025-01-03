/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testCharacterCopyByAffectation.cpp                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 06:53:14 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 04:25:51 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void    testCharacterCopyByAffectation() {

    std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Test character copy by affectation" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;

	// Creation of 1 character instance (one that will be copied)
	
	Character	character1( "CharacterName1" );
	std::cout << std::endl;

	// Creation of 1 character instance (copy with empty inventory)
	
	Character	character2;
	std::cout << std::endl;

	// Creation of 1 character instance (will be used as target)
	
	Character	character3( "CharacterName3" );
	std::cout << std::endl;

	// Creation of 1 character instance (copy with full inventory)
	
	Character	character4;
	std::cout << std::endl;

	// Creation of 3 materia instances (for character1)

	Ice*	materia1 = new Ice();
	std::cout << std::endl;
	Cure*	materia2 = new Cure();
	std::cout << std::endl;
	Ice*	materia3 = new Ice();
	std::cout << std::endl;

	// Creation of 4 materia instances (for character4)

	Ice*	materia4 = new Ice();
	std::cout << std::endl;
	Cure*	materia5 = new Cure();
	std::cout << std::endl;
	Ice*	materia6 = new Ice();
	std::cout << std::endl;
	Cure*	materia7 = new Cure();
	std::cout << std::endl;

	// Character 1 equips the 4 previous materias within its inventory

	character1.equip(materia1);
	character1.equip(materia2);
	character1.equip(materia3);

	std::cout << std::endl;

	// Chec initial attributes and member function with character that will be copied

	std::cout << "Name of character1 is : " << character1.getName() << std::endl;
	std::cout << std::endl;
	character1.use(0, character3);
	std::cout << "Materia # from inventory idx 0 : " << character1.getMateriaFromInventory(0)->getId() << std::endl;
	std::cout << std::endl;
	character1.use(1, character3);
	std::cout << "Materia # from inventory idx 1 : " << character1.getMateriaFromInventory(1)->getId() << std::endl;
	std::cout << std::endl;
	character1.use(2, character3);
	std::cout << "Materia # from inventory idx 2 : " << character1.getMateriaFromInventory(2)->getId() << std::endl;

	std::cout << std::endl;

	// Copy of character using affectation operator

	character2 = character1;

	std::cout << std::endl;

	// Tests of use to see if the copy worked

	std::cout << "Name of character2 is : " << character2.getName() << std::endl;
	std::cout << std::endl;
	character2.use(0, character3);
	std::cout << "Materia # from inventory idx 0 : " << character2.getMateriaFromInventory(0)->getId() << std::endl;
	std::cout << std::endl;
	character2.use(1, character3);
	std::cout << "Materia # from inventory idx 1 : " << character2.getMateriaFromInventory(1)->getId() << std::endl;
	std::cout << std::endl;
	character2.use(2, character3);
	std::cout << "Materia # from inventory idx 2 : " << character2.getMateriaFromInventory(2)->getId() << std::endl;
	std::cout << std::endl;
	
	// Character 4 equips its inventory with materias
	
	character4.equip(materia4);
	character4.equip(materia5);
	character4.equip(materia6);
	character4.equip(materia7);

	std::cout << std::endl;

	// Copy of character using affectation operator

	character4 = character1;

	std::cout << std::endl;

	// Tests of use to see if the copy worked

	std::cout << "Name of character4 is : " << character4.getName() << std::endl;
	std::cout << std::endl;
	character4.use(0, character3);
	std::cout << "Materia # from inventory idx 0 : " << character4.getMateriaFromInventory(0)->getId() << std::endl;
	std::cout << std::endl;
	character4.use(1, character3);
	std::cout << "Materia # from inventory idx 1 : " << character4.getMateriaFromInventory(1)->getId() << std::endl;
	std::cout << std::endl;
	character4.use(2, character3);
	std::cout << "Materia # from inventory idx 2 : " << character4.getMateriaFromInventory(2)->getId() << std::endl;
	std::cout << std::endl;
	character4.use(3, character3);
	
	std::cout << std::endl;
    
    return ;
}