/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testMateriaSourceCopyByConstructor.cpp             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 07:25:49 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 06:56:00 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testCopyByConstructor(MateriaSource MateriaSource1)
{
	// Displaying materia data from MateriaSource1's inventory

	std::cout << std::endl;
	
	std::cout << "MateriaSource1 -> indx 0 -> id : " << MateriaSource1.getMateriaFromInventory(0)->getId() << std::endl;
	std::cout << "MateriaSource1 -> indx 0 -> type : " << MateriaSource1.getMateriaFromInventory(0)->getType() << std::endl;
	std::cout << std::endl;
	std::cout << "MateriaSource1 -> indx 1 -> id : " << MateriaSource1.getMateriaFromInventory(1)->getId() << std::endl;
	std::cout << "MateriaSource1 -> indx 1 -> type : " << MateriaSource1.getMateriaFromInventory(1)->getType() << std::endl;
	std::cout << std::endl;
	std::cout << "MateriaSource1 -> indx 2 -> id : " << MateriaSource1.getMateriaFromInventory(2)->getId() << std::endl;
	std::cout << "MateriaSource1 -> indx 2 -> type : " << MateriaSource1.getMateriaFromInventory(2)->getType() << std::endl;
	std::cout << std::endl;
	
	return ;
}

void    testMateriaSourceCopyByConstructor() {

   	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by constructor from MateriaSource" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
	
	// Creation of a MateriaSource instance (will be copied)
	
	MateriaSource	MateriaSource1;
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

	testCopyByConstructor(MateriaSource1);

    return ;
}