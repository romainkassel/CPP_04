/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:03:03 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 11:33:19 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEADER_H__
#define __HEADER_H__

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include "Brain.hpp"

#include <iostream>

// Tests copy by affectation 

void	testBrainCopyByAffectation();
void	testDogCopyByAffectation();
void	testCatCopyByAffectation();
void	testWrongAnimalCopyByAffectation();
void	testWrongCatCopyByAffectation();

// Tests copy by constructor 

void	testBrainCopyByConstructor();
void	testDogCopyByConstructor();
void	testCatCopyByConstructor();
void	testWrongAnimalCopyByConstructor();
void	testWrongCatCopyByConstructor();

#endif