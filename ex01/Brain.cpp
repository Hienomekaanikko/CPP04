/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:42:28 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/10 11:53:12 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain: Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "no idea";
	}
}

Brain::Brain(std::string ideas[]) {
	std::cout << "Brain: Constructor with an array of 100 ideas called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = ideas[i];
	}
}

Brain::~Brain() {
	std::cout << "Brain: Destructor called" << std::endl;
}

Brain::Brain(const Brain& other){
	std::cout << "Brain: Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		ideas[i] = other.ideas[i];
	}
}

Brain& Brain::operator=(const Brain& other) {
	if (this != &other) {
		std::cout << "Brain: Copy assignment operator called" << std::endl;
		for (int i = 0; i < 100; i++) {
			ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

void Brain::setIdea(int index, const std::string& idea) {
	if (index >= 0 && index < 100) {
		ideas[index] = idea;
	}
}

std::string Brain::getIdea(int index) const {
	if (index >= 0 && index < 100) {
		return ideas[index];
	}
	return "";
}
