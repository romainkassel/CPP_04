/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/19 07:16:50 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Header.hpp"

// Subject test

int main() {
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}

// Personal tests

/*int main()
{
	// Materia
	
	testMateriaGetType();
	testMateriaClone();
	testMateriaUse();
	testMateriaCopyByAffectation();
	testMateriaCopyByConstructor();

	// Character
	
	testCharacterGetName();
	testCharacterEquip();
	testCharacterUnequip();
	testCharacterUse();
	testCharacterCopyByAffectation();
	testCharacterCopyByConstructor();

	// MateriaSource
	
	testMateriaSourceLearn();
	testMateriaSourceCreate();
	testMateriaSourceCopyByAffectation();
	testMateriaSourceCopyByConstructor();

	return 0;
}*/
