/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:34:43 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/22 15:04:52 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void){
	std::cout << "Default case: " << std::endl;
	const Animal *meta = new Animal();
	std::cout << "Type of animal: " << meta->getType() << std::endl;
	meta->makeSound();
	delete meta;
	std::cout << "-----------------------------------" << std::endl;

	std::cout << "Cat case: " << std::endl;
	meta = new Cat();
	std::cout << "Type of animal: " << meta->getType() << std::endl;
	meta->makeSound();
	delete meta;
	std::cout << "-----------------------------------" << std::endl;

	std::cout << "Dog case: " << std::endl;
	meta = new Dog();
	std::cout << "Type of animal: " << meta->getType() << std::endl;
	meta->makeSound();
	delete meta;
	std::cout << "-----------------------------------" << std::endl;

	std::cout << "Wrong animal case: " << std::endl;
	const WrongAnimal *wrongmeta = new WrongCat();
	std::cout << "Type of animal: " << meta->getType() << std::endl;
	meta->makeSound();
	delete meta;
	std::cout << "-----------------------------------" << std::endl;
}
