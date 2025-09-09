/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:20:06 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/09 11:34:16 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat: Default constructor called" << std::endl;
	type = "Default_Cat";
}

Cat::Cat(std::string& type): Animal(type) {
	std::cout << "Cat: constructor called with type " << type << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat: Destructor called on " << type << std::endl;
}

Cat::Cat(const Cat& other): Animal(other.type){
	std::cout << "Cat: Copy constructor called on " << other.type << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		type = other.type;
		std::cout << "Cat: Copy assignment operator called. " << type << " is now " << other.type << std::endl;
	}
	return *this;
}
void Cat::makeSound() const {
	std::cout << type << " 🐱: Meooooow!!!!" << std::endl;
}
