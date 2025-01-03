/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testCatCopyByAffectation.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:39:31 by rkassel           #+#    #+#             */
/*   Updated: 2024/11/19 08:23:10 by debian           ###   ########.fr       */
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
	
	std::cout << std::endl;
	
	// Creation of a cat instance (will be copied)
	
	Cat	cat1;
	std::cout << std::endl;

	// Replacing some cat ideas with custom std::string

	cat1.setIdea("I have an idea", 0);
	cat1.setIdea("That you want hear", 12);
	cat1.setIdea("toutoutoutoutou", 86);

	// Display of Cat type

	std::cout << "Cat1 type : " << cat1.getType() << std::endl;
	std::cout << std::endl;

	// Display of Cat1 ideas

	cat1.displayIdeas();
	std::cout << std::endl;

	// Creation of a cat instance (copy)
	
	Cat	cat2;
	cat2 = cat1;

	std::cout << std::endl;

	// Display of Cat type

	std::cout << "Cat2 type : " << cat2.getType() << std::endl;
	std::cout << std::endl;

	// Display of Cat2 ideas

	cat2.displayIdeas();
	std::cout << std::endl;

	return ;
}