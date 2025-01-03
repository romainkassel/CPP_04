/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:03:03 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 06:48:00 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEADER_H__
#define __HEADER_H__

#ifndef VERBOSE
#define VERBOSE 0
#endif

#include <iostream>
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

// TESTS

//// Materia

void	testMateriaGetType();
void    testMateriaClone();
void    testMateriaUse();
void    testMateriaCopyByAffectation();
void    testMateriaCopyByConstructor();

//// Character

void    testCharacterGetName();
void    testCharacterEquip();
void    testCharacterUnequip();
void    testCharacterUse();
void    testCharacterCopyByAffectation();
void    testCharacterCopyByConstructor();

//// MateriaSource

void    testMateriaSourceLearn();
void    testMateriaSourceCreate();
void    testMateriaSourceCopyByAffectation();
void    testMateriaSourceCopyByConstructor();

#endif