/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testCharacterGetName.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 06:53:14 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 00:38:48 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void    testCharacterGetName() {

    std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Test character getName" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;

	// Creation of 1 character instance (one that will be copied)
	
	Character	character1( "CharacterName1" );
	std::cout << std::endl;

	// Display of character using getName

	std::cout << "Name of character1 is : " << character1.getName() << std::endl;

	std::cout << std::endl;
    
    return ;
}