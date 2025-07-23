/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:39:47 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/22 14:54:38 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {
	public:
		//default constructor
		Cat();
		//destructor
		~Cat();
		//copy constructor
		Cat(const Cat &other);
		//copy assignment constructor
		Cat& operator=(const Cat &other);
		//make sound function
		void makeSound(void) const;
};

#endif

