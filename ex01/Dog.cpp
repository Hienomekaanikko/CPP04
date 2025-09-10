/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:21:37 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/10 15:24:51 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
	std::cout << "Dog: Default constructor called" << std::endl;
	mind = new Brain();
}

Dog::Dog(const std::string& type): Animal(type) {
	std::cout << "Dog: constructor called with type " << type << std::endl;
	mind = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog: Destructor called on " << type << std::endl;
	delete mind;
}

Dog::Dog(const Dog& other): Animal(other.type){
	std::cout << "Dog: Copy constructor called on " << other.type << std::endl;
	mind = new Brain(*other.mind);
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		std::cout << "Dog: Copy assignment operator called. " << type << " is now " << other.type << std::endl;
		type = other.type;
		if (mind)
			delete mind;
		mind = new Brain(*other.mind);
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
	else if (index >= 100)
		std::cout << "WARNING! OVERTHINKING IN PROCESS: " << type << " can handle only 100 thoughts!" << std::endl;
}
