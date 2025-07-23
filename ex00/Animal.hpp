/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:34:59 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/22 14:56:47 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string	_type;
	public:
		//default constructor
		Animal();
		//destructor
		virtual ~Animal();
		//copy constructor
		Animal(const Animal &other);
		//copy assignment constructor
		Animal& operator=(const Animal &other);
		//make sound function
		virtual void makeSound(void) const;
		//
		const std::string &getType(void) const;
};

#endif
