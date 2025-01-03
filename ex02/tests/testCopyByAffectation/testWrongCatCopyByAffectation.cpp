/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testWrongCatCopyByAffectation.cpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/19 09:00:58 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testWrongCatCopyByAffectation() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by affectation from WrongCat" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
		
	// Creation of an WrongCat instance (will be copied)
	
	WrongCat	wrongCat1;
	std::cout << std::endl;

	// Display of wrongCat1 type

	std::cout << "WrongCat1 type : " << wrongCat1.getType() << std::endl;
	std::cout << std::endl;

	// Creation of a WrongCat instance (copy)
	
	WrongCat	wrongCat2;
	wrongCat2 = wrongCat1;

	std::cout << std::endl;

	// Display of wrongCat2 type

	std::cout << "WrongCat2 type : " << wrongCat2.getType() << std::endl;
	
	std::cout << std::endl;

	return ;
}