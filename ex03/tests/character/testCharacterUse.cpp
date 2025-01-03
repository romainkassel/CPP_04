/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testCharacterUse.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 06:53:14 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 03:35:46 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void    testCharacterUse() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check use from character" << std::endl;
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

	character1.use(0, character2);
	character1.use(1, character2);
	character1.use(2, character2);
	character1.use(3, character2);

	std::cout << std::endl;

	character1.use(-1, character2);
	character1.use(4, character2);

	std::cout << std::endl;

	character1.equip(materia1);
	character1.use(0, character2);

	std::cout << std::endl;

	character1.equip(materia2);
	character1.use(1, character2);

	std::cout << std::endl;
    
    return ;
}