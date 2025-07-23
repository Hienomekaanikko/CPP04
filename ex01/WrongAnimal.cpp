/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:00:00 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/22 15:00:07 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "🛠️ Constructor called by WrongAnimal" << std::endl;
	this->_type = "Wrong Animal";
}

WrongAnimal::~WrongAnimal(){
	std::cout << "🛠️ Destructor called by WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other): _type(other._type){
	std::cout << "🛠️ Copy constructor called by WrongAnimal" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other){
	std::cout << "🛠️ Copy assignment constructor called by WrongAnimal" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void WrongAnimal::makeSound(void) const{
	std::cout << "❌ Wrong animal beep boop! ❌" << std::endl;
}

const std::string &WrongAnimal::getType(void) const{
	return this->_type;
}
