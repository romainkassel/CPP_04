/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testMateriaClone.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 07:25:49 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 02:19:10 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void    testMateriaClone() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check materia clone" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;

    std::cout << std::endl;
	Ice			ice;
	std::cout << std::endl;
	Cure		cure;
	std::cout << std::endl;

    Character	character1( "CharacterName1" );
	std::cout << std::endl;

	ice.use(character1);
	std::cout << "ice.getId() : " << ice.getId() << std::endl;
	std::cout << "ice.getType() : " << ice.getType() << std::endl;
	std::cout << std::endl;
	cure.use(character1);
	std::cout << "cure.getId() : " << cure.getId() << std::endl;
	std::cout << "cure.getType() : " << cure.getType() << std::endl;
	std::cout << std::endl;

	AMateria*	iceCpy = ice.clone();
	std::cout << std::endl;
	AMateria*	cureCpy = cure.clone();
	std::cout << std::endl;

	iceCpy->use(character1);
	std::cout << "iceCpy->getId() : " << iceCpy->getId() << std::endl;
	std::cout << "iceCpy->getType() : " << iceCpy->getType() << std::endl;
	std::cout << std::endl;
	cureCpy->use(character1);
	std::cout << "cureCpy->getId() : " << cureCpy->getId() << std::endl;
	std::cout << "cureCpy->getType() : " << cureCpy->getType() << std::endl;
	std::cout << std::endl;

    delete (iceCpy);
    delete (cureCpy);
    
    return ;
}