/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:40:24 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/22 14:54:41 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {
	public:
		//constructor
		Dog();
		//destructor
		~Dog();
		//copy constructor
		Dog(const Dog &other);
		//copy assignment constructor
		Dog& operator=(const Dog &other);
		//sound making function
		void makeSound(void);
};

#endif

