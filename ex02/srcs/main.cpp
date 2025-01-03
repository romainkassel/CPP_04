/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/19 11:42:52 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include "Brain.hpp"

#include <iostream>

#include "../includes/Header.hpp"

// Subject tests

int main()
{
	std::cout << std::endl;
	
	const AAnimal* j = new Dog();
	std::cout << std::endl;
	const AAnimal* i = new Cat();
	
	std::cout << std::endl;

	delete j;//should not create a leak
	std::cout << std::endl;
	delete i;

	std::cout << std::endl;
	
	return 0;
}

// Personal tests

/*int	main( void ) {
	
	AAnimal	*animalTable[10];
	int		i;

	std::cout << std::endl;
	
	for (i = 0; i < 5; i++)
		animalTable[i] = new Dog();

	std::cout << std::endl;
	
	for (i = 5; i < 10; i++)
		animalTable[i] = new Cat();
	
	std::cout << std::endl;

	for (i = 0; i < 10; i++)
	{
		animalTable[i]->displayIdeas();
		std::cout << std::endl;
		std::cout << "*****************************" << std::endl;
		std::cout << std::endl;
	}
	
	for (i = 0; i < 10; i++)
	{
		delete(animalTable[i]);
		if (i == 4)
			std::cout << std::endl;
	}

	// Tests copy by affectation
	
	testBrainCopyByAffectation();
	testDogCopyByAffectation();
	testCatCopyByAffectation();
	testWrongAnimalCopyByAffectation();
	testWrongCatCopyByAffectation();

	// Tests copy by constructor

	testBrainCopyByConstructor();
	testDogCopyByConstructor();
	testCatCopyByConstructor();
	testWrongAnimalCopyByConstructor();
	testWrongCatCopyByConstructor();

	std::cout << std::endl;
	
	return (0);
}*/