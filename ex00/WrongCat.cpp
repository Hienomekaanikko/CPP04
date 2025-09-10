/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:53:48 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/10 14:52:54 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("Default_WrongCat") {
	std::cout << "WrongCat: Default constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string& type): WrongAnimal(type) {
	std::cout << "WrongCat: constructor called with type " << type << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat: Destructor called on " << type << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other.type){
	std::cout << "WrongCat: Copy constructor called on " << other.type << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other) {
		std::cout << "WrongCat: Copy assignment operator called. " << type << " is now " << other.type << std::endl;
		type = other.type;
	}
	return *this;
}
void WrongCat::makeSound() const {
	std::cout << type << " WrongCat 🐱: Meooooow!!!!" << std::endl;
}
