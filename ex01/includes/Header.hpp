/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:03:03 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 10:13:49 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEADER_H__
#define __HEADER_H__

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include "Brain.hpp"

#include <iostream>

// Tests copy by affectation 

void	testBrainCopyByAffectation();
void	testAnimalCopyByAffectation();
void	testDogCopyByAffectation();
void	testCatCopyByAffectation();
void	testWrongAnimalCopyByAffectation();
void	testWrongCatCopyByAffectation();

// Tests copy by constructor 

void	testBrainCopyByConstructor();
void	testAnimalCopyByConstructor();
void	testDogCopyByConstructor();
void	testCatCopyByConstructor();
void	testWrongAnimalCopyByConstructor();
void	testWrongCatCopyByConstructor();

#endif