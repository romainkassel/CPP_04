/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testMateriaSourceCopyByAffectation.cpp             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 07:25:49 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 06:44:22 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void    testMateriaSourceCopyByAffectation() {

   	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by affectation from MateriaSource" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
	
	// Creation of a MateriaSource instance (will be copied)
	
	MateriaSource	MateriaSource1;
	std::cout << std::endl;

	// Creation of a MateriaSource instance (copy with empty inventory)
	
	MateriaSource	MateriaSource2;
	std::cout << std::endl;

	// Filling inventory of MateriaSource1 with materias

	MateriaSource1.learnMateria(new Ice());
	MateriaSource1.learnMateria(new Cure());
	MateriaSource1.learnMateria(new Ice());

	// Displaying materia data from MateriaSource1's inventory

	std::cout << "MateriaSource1 -> indx 0 -> id : " << MateriaSource1.getMateriaFromInventory(0)->getId() << std::endl;
	std::cout << "MateriaSource1 -> indx 0 -> type : " << MateriaSource1.getMateriaFromInventory(0)->getType() << std::endl;
	std::cout << std::endl;
	std::cout << "MateriaSource1 -> indx 1 -> id : " << MateriaSource1.getMateriaFromInventory(1)->getId() << std::endl;
	std::cout << "MateriaSource1 -> indx 1 -> type : " << MateriaSource1.getMateriaFromInventory(1)->getType() << std::endl;
	std::cout << std::endl;
	std::cout << "MateriaSource1 -> indx 2 -> id : " << MateriaSource1.getMateriaFromInventory(2)->getId() << std::endl;
	std::cout << "MateriaSource1 -> indx 2 -> type : " << MateriaSource1.getMateriaFromInventory(2)->getType() << std::endl;
	std::cout << std::endl;

	// Affecting MateriaSource2 to MateriaSource1
	
	MateriaSource2 = MateriaSource1;

	// Displaying materia data from MateriaSource2's inventory

	std::cout << std::endl;

	std::cout << "MateriaSource2 -> indx 0 -> id : " << MateriaSource2.getMateriaFromInventory(0)->getId() << std::endl;
	std::cout << "MateriaSource2 -> indx 0 -> type : " << MateriaSource2.getMateriaFromInventory(0)->getType() << std::endl;
	std::cout << std::endl;
	std::cout << "MateriaSource2 -> indx 1 -> id : " << MateriaSource2.getMateriaFromInventory(1)->getId() << std::endl;
	std::cout << "MateriaSource2 -> indx 1 -> type : " << MateriaSource2.getMateriaFromInventory(1)->getType() << std::endl;
	std::cout << std::endl;
	std::cout << "MateriaSource2 -> indx 2 -> id : " << MateriaSource2.getMateriaFromInventory(2)->getId() << std::endl;
	std::cout << "MateriaSource2 -> indx 2 -> type : " << MateriaSource2.getMateriaFromInventory(2)->getType() << std::endl;
	std::cout << std::endl;

	// Creation of a MateriaSource instance (copy with full inventory)
	
	MateriaSource	MateriaSource3;
	std::cout << std::endl;

	// Filling inventory of MateriaSource3 with materias

	MateriaSource3.learnMateria(new Ice());
	MateriaSource3.learnMateria(new Cure());
	MateriaSource3.learnMateria(new Ice());
	MateriaSource3.learnMateria(new Cure());

	// Displaying current materia data from MateriaSource3's inventory

	std::cout << "MateriaSource3 -> indx 0 -> id : " << MateriaSource3.getMateriaFromInventory(0)->getId() << std::endl;
	std::cout << "MateriaSource3 -> indx 0 -> type : " << MateriaSource3.getMateriaFromInventory(0)->getType() << std::endl;
	std::cout << std::endl;
	std::cout << "MateriaSource3 -> indx 1 -> id : " << MateriaSource3.getMateriaFromInventory(1)->getId() << std::endl;
	std::cout << "MateriaSource3 -> indx 1 -> type : " << MateriaSource3.getMateriaFromInventory(1)->getType() << std::endl;
	std::cout << std::endl;
	std::cout << "MateriaSource3 -> indx 2 -> id : " << MateriaSource3.getMateriaFromInventory(2)->getId() << std::endl;
	std::cout << "MateriaSource3 -> indx 2 -> type : " << MateriaSource3.getMateriaFromInventory(2)->getType() << std::endl;
	std::cout << std::endl;
	std::cout << "MateriaSource3 -> indx 3 -> id : " << MateriaSource3.getMateriaFromInventory(3)->getId() << std::endl;
	std::cout << "MateriaSource3 -> indx 3 -> type : " << MateriaSource3.getMateriaFromInventory(3)->getType() << std::endl;
	std::cout << std::endl;

	// Affecting MateriaSource1 to MateriaSource3
	
	MateriaSource3 = MateriaSource1;

	// Displaying materia data from MateriaSource3's inventory

	std::cout << std::endl;

	std::cout << "MateriaSource3 -> indx 0 -> id : " << MateriaSource3.getMateriaFromInventory(0)->getId() << std::endl;
	std::cout << "MateriaSource3 -> indx 0 -> type : " << MateriaSource3.getMateriaFromInventory(0)->getType() << std::endl;
	std::cout << std::endl;
	std::cout << "MateriaSource3 -> indx 1 -> id : " << MateriaSource3.getMateriaFromInventory(1)->getId() << std::endl;
	std::cout << "MateriaSource3 -> indx 1 -> type : " << MateriaSource3.getMateriaFromInventory(1)->getType() << std::endl;
	std::cout << std::endl;
	std::cout << "MateriaSource3 -> indx 2 -> id : " << MateriaSource3.getMateriaFromInventory(2)->getId() << std::endl;
	std::cout << "MateriaSource3 -> indx 2 -> type : " << MateriaSource3.getMateriaFromInventory(2)->getType() << std::endl;
	std::cout << std::endl;

	

    return ;
}