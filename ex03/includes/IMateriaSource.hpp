/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:03:03 by debian            #+#    #+#             */
/*   Updated: 2024/11/18 04:01:02 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__IMATERIASOURCE_H__
#define __IMATERIASOURCE_H__

#include "AMateria.hpp"

class	IMateriaSource {
	
public:

	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria* m) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;

};

#endif