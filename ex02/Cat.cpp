/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:20:06 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/10 15:12:27 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): AAnimal("Cat") {
	std::cout << "Cat: Default constructor called" << std::endl;
	mind = new Brain();
}

Cat::Cat(const std::string& type): AAnimal(type) {
	std::cout << "Cat: constructor called with type " << type << std::endl;
	mind = new Brain();
}

Cat::~Cat() {
	std::cout << "Cat: Destructor called on " << type << std::endl;
	delete mind;
}

Cat::Cat(const Cat& other): AAnimal(other.type){
	std::cout << "Cat: Copy constructor called on " << other.type << std::endl;
	mind = new Brain(*other.mind);
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		std::cout << "Cat: Copy assignment operator called. " << type << " is now " << other.type << std::endl;
		type = other.type;
		if (mind)
			delete mind;
		mind = new Brain(*other.mind);
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << type << " 🐱: Meooooow!!!!" << std::endl;
}

std::string Cat::getIdea(int index) const {
	if (mind)
		return mind->getIdea(index);
	return "";
}

void Cat::setIdea(int index, std::string idea) {
	if (index >= 0 && index < 100)
		mind->setIdea(index, idea);
	if (index >= 100)
		std::cout << "WARNING! OVERTHINKING IN PROCESS: " << type << " can handle only 100 thoughts!" << std::endl;
}
