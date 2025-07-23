/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:00:51 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/22 14:52:50 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
	std::cout << "🛠️ Called default constructor on Cat" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat(){
	std::cout << "🛠️ Called destructor on Cat" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other){
	std::cout << "🛠️ Called copy constructor on Cat" << std::endl;
}

Cat& Cat::operator=(const Cat &other){
	std::cout << "🛠️ Called copy assignment operator on Cat" << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

void Cat::makeSound() const {
	std::cout << "😺 Cat: MEOOOOW! 📣" << std::endl;
}
