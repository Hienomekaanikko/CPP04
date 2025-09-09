/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:07:12 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/09 15:05:19 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal: Default constructor called" << std::endl;
	type = "Default_Animal";
}

Animal::Animal(const std::string& type): type(type) {
	std::cout << "Animal: constructor called with type " << type << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal: Destructor called on type " << type << std::endl;
}

Animal::Animal(Animal& other): type(other.type) {
	std::cout << "Animal: Copy constructor called. Animal " << type << " is now " << other.type << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other) {
		std::cout << "Animal: Copy assignment operator called. Animal " << type << " has now values of " << other.type << std::endl;
		type = other.type;
	}
	return *this;
}

void Animal::makeSound() const {
	std::cout << type << " ❌: Non specific animal sound" << std::endl;
}

const std::string& Animal::getType() const{
	return type;
}
