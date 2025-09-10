/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:21:37 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/10 13:07:21 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog: Default constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(std::string& type): Animal(type) {
	std::cout << "Dog: constructor called with type " << type << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog: Destructor called on " << type << std::endl;
}

Dog::Dog(const Dog& other): Animal(other.type){
	std::cout << "Dog: Copy constructor called on " << other.type << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		std::cout << "Dog: Copy assignment operator called. " << type << " is now " << other.type << std::endl;
		type = other.type;
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << type << " 🐶: Woof woof!!!!" << std::endl;
}
