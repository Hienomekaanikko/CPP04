/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:44:28 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/22 14:56:37 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Called default constructor on Animal" << std::endl;
}

Animal::~Animal(){
	std::cout << "Called destructor on Animal" << std::endl;
}

Animal::Animal(const Animal &other): _type(other._type){
	std::cout << "Called copy constructor on Animal" << std::endl;
}

Animal& Animal::operator=(const Animal &other){
	std::cout << "Called copy assignment constructor on Animal" << std::endl;
	if (this == &other)
		return *this;
	this->_type = other._type;
	return *this;
}

void Animal::makeSound(void){
	std::cout << "Here an animal makes some sound" << std::endl;
}

std::string Animal::getType(void){
	return this->_type;
}
