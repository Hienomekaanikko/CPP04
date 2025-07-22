/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:01:41 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/22 15:02:48 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "Called default constructor on WrongCat" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat(){
	std::cout << "Called destructor on WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other){
	std::cout << "Called copy constructor on WrongCat" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other){
	std::cout << "Called copy assignment operator on WrongCat" << std::endl;
	if (this != &other)
		WrongAnimal::operator=(other);
	return *this;
}
