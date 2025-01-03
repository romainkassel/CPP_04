/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testCatCopyByAffectation.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/19 12:00:50 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testCatCopyByAffectation() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by affectation from Cat" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
		
	// Creation of a cat instance (will be copied)
	
	Cat	cat1;
	std::cout << std::endl;

	// Display of Cat type

	std::cout << "Cat1 type : " << cat1.getType() << std::endl;
	std::cout << std::endl;

	// Creation of a cat instance (copy)
	
	Cat	cat2;
	cat2 = cat1;

	std::cout << std::endl;

	// Display of Cat type

	std::cout << "Cat2 type : " << cat2.getType() << std::endl;
	std::cout << std::endl;

	return ;
}