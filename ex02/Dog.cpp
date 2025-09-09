/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:21:37 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/09 15:24:48 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog: Default constructor called" << std::endl;
	type = "Default_Doge";
	mind = new Brain();
}

Dog::Dog(std::string& type): AAnimal(type) {
	std::cout << "Dog: constructor called with type " << type << std::endl;
	mind = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog: Destructor called on " << type << std::endl;
	delete mind;
}

Dog::Dog(const Dog& other): AAnimal(other.type){
	std::cout << "Dog: Copy constructor called on " << other.type << std::endl;
	mind = new Brain(*other.mind);
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		type = other.type;
		if (mind)
			delete mind;
		mind = new Brain(*other.mind);
		std::cout << "Dog: Copy assignment operator called. " << type << " is now " << other.type << std::endl;
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << type << " 🐶: Woof woof!!!!" << std::endl;
}

std::string Dog::getIdea(int index) const {
	if (mind)
		return mind->getIdea(index);
	return "";
}

void Dog::setIdea(int index, std::string idea) {
	if (index >= 0 && index < 100)
		mind->setIdea(index, idea);
}
