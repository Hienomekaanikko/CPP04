/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:07:12 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/09 15:21:45 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "AAnimal: Default constructor called" << std::endl;
	type = "Default_Animal";
}

AAnimal::AAnimal(const std::string& type): type(type) {
	std::cout << "AAnimal: constructor called with type " << type << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal: Destructor called on type " << type << std::endl;
}

AAnimal::AAnimal(AAnimal& other): type(other.type) {
	std::cout << "AAnimal: Copy constructor called. AAnimal " << type << " is now " << other.type << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	if (this != &other) {
		std::cout << "AAnimal: Copy assignment operator called. AAnimal " << type << " has now values of " << other.type << std::endl;
		type = other.type;
	}
	return *this;
}

void AAnimal::makeSound() const {
	std::cout << type << " ❌: Non specific animal sound" << std::endl;
}

const std::string& AAnimal::getType() const{
	return type;
}
