/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testMateriaSourceLearn.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 07:25:49 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 06:11:26 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void    testMateriaSourceLearn() {

    std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check learn from MateriaSource" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;

	Character	character1( "CharacterName1" );
	std::cout << std::endl;

	MateriaSource	MateriaSource1;

	std::cout << std::endl;
	
	MateriaSource1.learnMateria(new Ice());
	MateriaSource1.learnMateria(new Cure());
	MateriaSource1.learnMateria(new Ice());
	MateriaSource1.learnMateria(new Cure());
	MateriaSource1.learnMateria(new Ice());

	MateriaSource1.getMateriaFromInventory(0)->use(character1);
	std::cout << "MateriaSource1.getMateriaFromInventory(0)->getId() : " << MateriaSource1.getMateriaFromInventory(0)->getId() << std::endl;
	std::cout << "MateriaSource1.getMateriaFromInventory(0)->getType() : " << MateriaSource1.getMateriaFromInventory(0)->getType() << std::endl;

	std::cout << std::endl;
	
	MateriaSource1.getMateriaFromInventory(1)->use(character1);
	std::cout << "MateriaSource1.getMateriaFromInventory(1)->getId() : " << MateriaSource1.getMateriaFromInventory(1)->getId() << std::endl;
	std::cout << "MateriaSource1.getMateriaFromInventory(1)->getType() : " << MateriaSource1.getMateriaFromInventory(1)->getType() << std::endl;
	
	std::cout << std::endl;
	
	MateriaSource1.getMateriaFromInventory(2)->use(character1);
	std::cout << "MateriaSource1.getMateriaFromInventory(2)->getId() : " << MateriaSource1.getMateriaFromInventory(2)->getId() << std::endl;
	std::cout << "MateriaSource1.getMateriaFromInventory(2)->getType() : " << MateriaSource1.getMateriaFromInventory(2)->getType() << std::endl;
	
	std::cout << std::endl;
	
	MateriaSource1.getMateriaFromInventory(3)->use(character1);
	std::cout << "MateriaSource1.getMateriaFromInventory(3)->getId() : " << MateriaSource1.getMateriaFromInventory(3)->getId() << std::endl;
	std::cout << "MateriaSource1.getMateriaFromInventory(3)->getType() : " << MateriaSource1.getMateriaFromInventory(3)->getType() << std::endl;
    
    std::cout << std::endl;
	
	return ;
}