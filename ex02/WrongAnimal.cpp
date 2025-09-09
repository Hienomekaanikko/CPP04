/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:52:46 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/09 16:03:34 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
	type = "Default_WrongAnimal";
}

WrongAnimal::WrongAnimal(const std::string& type): type(type) {
	std::cout << "WrongAnimal: constructor called with type " << type << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal: Destructor called on type " << type << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& other): type(other.type) {
	std::cout << "WrongAnimal: Copy constructor called. WrongAnimal " << type << " is now " << other.type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other) {
		std::cout << "WrongAnimal: Copy assignment operator called. WrongAnimal " << type << " has now values of " << other.type << std::endl;
		type = other.type;
	}
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << type << " WrongAnimal ❌: Non specific animal sound" << std::endl;
}

const std::string& WrongAnimal::getType() const{
	return type;
}
