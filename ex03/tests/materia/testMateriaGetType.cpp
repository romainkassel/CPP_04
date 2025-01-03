/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testMateriaGetType.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 07:25:49 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 00:25:49 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void    testMateriaGetType() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Test Materia getType" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;

	Ice			ice;
	std::cout << std::endl;
	Cure		cure;
	std::cout << std::endl;

	std::cout << "ice.getType() : " << ice.getType() << std::endl;
	std::cout << "cure.getType() : " << cure.getType() << std::endl;

	std::cout << std::endl;
    
    return ;
}