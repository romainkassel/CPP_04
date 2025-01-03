/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testDogCopyByConstructor.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/19 10:00:55 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Header.hpp"

void	testCopyByConstructor(Dog dog1)
{
	std::cout << std::endl;
	
	// Display of Dog type

	std::cout << "Dog1 type : " << dog1.getType() << std::endl;
	std::cout << std::endl;

	// Display of Dog1 ideas

	dog1.displayIdeas();
	std::cout << std::endl;
	
	return ;
}

void	testDogCopyByConstructor() {

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "**********************************************************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "Check copy by constructor from Dog" << std::endl;
	std::cout << std::endl;
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	std::cout << std::endl;
	
	std::cout << std::endl;
	
	// Creation of a dog instance (will be copied)
	
	Dog	dog1;
	std::cout << std::endl;

	// Replacing some dog ideas with custom std::string

	dog1.setIdea("I have an idea", 0);
	dog1.setIdea("That you want hear", 12);
	dog1.setIdea("toutoutoutoutou", 86);

	// Display of Dog type

	std::cout << "Dog1 type : " << dog1.getType() << std::endl;
	std::cout << std::endl;

	// Display of Dog1 ideas

	dog1.displayIdeas();
	std::cout << std::endl;

	testCopyByConstructor(dog1);

	return ;
}