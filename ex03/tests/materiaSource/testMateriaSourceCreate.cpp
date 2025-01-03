/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testMateriaSourceCreate.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 07:25:49 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 06:22:20 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void    testMateriaSourceCreate() {

   	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check create from MateriaSource1" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
	
	// Creation of a new MateriaSource instance
	
	MateriaSource	MateriaSource2;
	std::cout << std::endl;

	// Creation of 2 materias with unexisting types

	MateriaSource2.createMateria("Ice");
	std::cout << std::endl;
	MateriaSource2.createMateria("Cure");
	std::cout << std::endl;

	// Learning 4 materias of type "ice"

	MateriaSource2.learnMateria(new Ice());
	MateriaSource2.learnMateria(new Ice());
	MateriaSource2.learnMateria(new Ice());
	MateriaSource2.learnMateria(new Ice());

	// Trying to create a materia of type cure but only "ice" type has been learned
	
	MateriaSource2.createMateria("cure");

	// Creation of a new MateriaSource instance
	
	MateriaSource	MateriaSource3;
	std::cout << std::endl;

	// Learning 2 materias of type "ice" and "cure"
	MateriaSource3.learnMateria(new Ice());
	MateriaSource3.learnMateria(new Cure());

	// Creating 2 materias of type "ice" and "cure"
	
	AMateria*	ice = MateriaSource3.createMateria("ice");
	std::cout << std::endl;
	AMateria*	cure = MateriaSource3.createMateria("cure");
	std::cout << std::endl;

	Character	character1("CharacterName1");

	std::cout << std::endl;

	ice->use(character1);
	cure->use(character1);

	std::cout << std::endl;

	delete (ice);
	delete (cure);
    
    return ;
}