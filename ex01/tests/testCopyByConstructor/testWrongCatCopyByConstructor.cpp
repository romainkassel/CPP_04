/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testWrongCatCopyByConstructor.cpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/19 10:15:40 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testCopyByConstructor(WrongCat wrongCat1) {

	std::cout << std::endl;
	
	// Display of wrongCat1 type

	std::cout << "WrongCat1 type : " << wrongCat1.getType() << std::endl;
	std::cout << std::endl;
	
	return ;
}

void	testWrongCatCopyByConstructor() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by constructor from WrongCat" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
		
	// Creation of an WrongCat instance (will be copied)
	
	WrongCat	wrongCat1;
	std::cout << std::endl;

	// Display of wrongCat1 type

	std::cout << "WrongCat1 type : " << wrongCat1.getType() << std::endl;
	std::cout << std::endl;

	testCopyByConstructor(wrongCat1);

	return ;
}