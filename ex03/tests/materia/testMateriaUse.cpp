/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testMateriaUse.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 07:25:49 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 00:28:20 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void    testMateriaUse() {

   	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Test Materia use" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;

	Ice			ice;
	std::cout << std::endl;
	Cure		cure;
	std::cout << std::endl;

	Character	character1( "CharacterName1" );
	std::cout << std::endl;

	std::cout << "ice.use(c) : ";
	ice.use(character1);
	std::cout << "cure.use(c) : ";
	cure.use(character1);

	std::cout << std::endl;
    
    return ;
}