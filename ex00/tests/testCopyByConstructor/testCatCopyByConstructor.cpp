/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testCatCopyByConstructor.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/19 11:57:13 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testCopyByConstructor(Cat cat1) {
	
	std::cout << std::endl;
	
	// Display of Cat type

	std::cout << "Cat1 type : " << cat1.getType() << std::endl;
	std::cout << std::endl;
	
	return ;
}

void	testCatCopyByConstructor() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by constructor from Cat" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
	
	// Creation of a cat instance (will be copied)
	
	Cat	cat1;
	std::cout << std::endl;

	// Display of Cat type

	std::cout << "Cat1 type : " << cat1.getType() << std::endl;
	std::cout << std::endl;

	testCopyByConstructor(cat1);

	return ;
}