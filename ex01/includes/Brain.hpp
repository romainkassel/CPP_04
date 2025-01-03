/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debian <debian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:03:03 by debian            #+#    #+#             */
/*   Updated: 2024/11/19 08:39:21 by debian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <string>

class	Brain {

public:

	Brain( void );
	Brain( Brain const & src );
	~Brain( void );

	Brain			&operator=( Brain const & rhs );

	void			setIdea( std::string idea, int i );
	std::string		getIdea( int i ) const;

private:

	std::string		ideas[100];
	
};

#endif