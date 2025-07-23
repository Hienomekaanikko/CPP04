/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:01:36 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/22 14:58:13 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(), brain(new Brain()){
	std::cout << "🛠️ Called default constructor on Dog" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog(){
	delete brain;
	std::cout << "🛠️ Called destructor on Dog and deleted brain" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other), brain(new Brain(*other.brain)){
	std::cout <<  "🛠️ Called copy constructor on Dog" << std::endl;
}

Dog& Dog::operator=(const Dog &other) {
	std::cout << "🛠️ Called default copy constructor on Dog" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "🐶 Dog: WOOFWOOF! 📣" << std::endl;
}
