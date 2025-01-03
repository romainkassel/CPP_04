/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/19 12:08:50 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

#include "../includes/Header.hpp"

// True tests from subject

int main() {

	std::cout << std::endl;
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;

	delete(meta);
	delete(j);
	delete(i);

	std::cout << std::endl;
	
	return 0;
}

// Wrong tests from subject

/*void	testFunctionWithClassPtrAsParam( const WrongAnimal* meta, const Animal* j, const WrongAnimal* i )
{
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl;

	i->makeSound(); //will output the WrongCat sound!
	j->makeSound();
	meta->makeSound();

	return ;
}*/

/*int main() {

	std::cout << std::endl;
	
	const WrongAnimal* meta = new WrongAnimal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();

	std::cout << std::endl;
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl;

	i->makeSound(); //will output the WrongCat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	testFunctionWithClassPtrAsParam( meta, j, i );
	std::cout << std::endl;

	delete(meta);
	delete(j);
	delete(i);
	
	std::cout << std::endl;
	
	return 0;
}*/

// Personal tests

/*int	main( void ) {

	std::cout << std::endl;

	Dog		dog;
	Cat		cat;

	std::cout << std::endl;

	std::cout << "dog type : " << dog.getType() << std::endl;
	std::cout << "cat type : " << cat.getType() << std::endl;

	std::cout << std::endl;

	std::cout << "makeSound dog : ";
	dog.makeSound();

	std::cout << "makeSound cat : ";
	cat.makeSound();
	
	// Tests copy by affectation
	
	testAnimalCopyByAffectation();
	testDogCopyByAffectation();
	testCatCopyByAffectation();
	testWrongAnimalCopyByAffectation();
	testWrongCatCopyByAffectation();

	// Tests copy by constructor

	testAnimalCopyByConstructor();
	testDogCopyByConstructor();
	testCatCopyByConstructor();
	testWrongAnimalCopyByConstructor();
	testWrongCatCopyByConstructor();

	std::cout << std::endl;
	
	return (0);
}*/