/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testBrainCopyByConstructor.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/19 09:31:37 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testCopyByConstructor(Brain brain1)
{
	std::cout << std::endl;
	
	int	i;
	
	// Display of Brain1 ideas
	
	for (i = 0; i < 100; i++)
		if (!brain1.getIdea(i).empty())
			std::cout << brain1.getIdea(i) << std::endl;

	std::cout << std::endl;

	return ;
}

void	testBrainCopyByConstructor() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by constructor from Brain" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
	
	int	i;
	
	// Creation of a brain instance (will be copied)
	
	Brain	brain1;
	std::cout << std::endl;

	// Filling brain1 with ideas

	brain1.setIdea("I have an idea", 0);
	brain1.setIdea("That you want hear", 12);
	brain1.setIdea("toutoutoutoutou", 86);

	// Display of Brain1 ideas
	
	for (i = 0; i < 100; i++)
		if (!brain1.getIdea(i).empty())
			std::cout << brain1.getIdea(i) << std::endl;
	
	std::cout << std::endl;

	testCopyByConstructor(brain1);

	return ;
}