/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:23:32 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/09 15:29:55 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

	std::cout << "\033[1;32m\nSetting up dog 'Nalle' and cat 'Nala'\n\n\033[0m";
	std::string dog = "Nalle";
	std::string cat = "Nala";

	Dog newDog(dog);
	Cat newCat(cat);

	std::cout << "\033[1;32m\nMaking sure that correct sounds come out\n\n\033[0m";

	newDog.makeSound();
	newCat.makeSound();

	std::cout << "\033[1;32m\n****Setting up thoughts for the brain of 'Nalle'****\n\033[0m";
	for (int i = 0; i < 100; i++) {
		newDog.setIdea(i, "💭 Wow a ball! 💭");
	}

	std::cout << "\033[1;32m\nReading the thoughts from the brain of 'Nalle'\n\n\033[0m";
	for (int i = 0; i < 100; i++) {
		std::cout << i + 1 << ": ";
		std::cout << newDog.getIdea(i) << std::endl;
	}

	std::cout << "\033[1;32m\n---------------------------------------------------------\n\033[0m";

	std::cout << "\033[1;32m\n****Setting up thoughts for the brain of 'Nala'****\n\033[0m";
	for (int i = 0; i < 100; i++) {
		newCat.setIdea(i, "💭 Thinking about pushing this wicked thing off the table 💭");
	}

	std::cout << "\033[1;32m\nReading the thoughts from the brain of 'Nala'\n\n\033[0m";
	for (int i = 0; i < 100; i++) {
		std::cout << i + 1 << ": ";
		std::cout << newCat.getIdea(i) << std::endl;
	}

	std::cout << "\033[1;32m\n---------------------------------------------------------\n\033[0m";

	std::cout << "\033[1;32m\nSetting up an array of 20 Animal objects\n\n\033[0m";

	Animal* animalArr[20];
	std::cout << "\033[1;32m\nFilling the first 10 as Dogs\n\n\033[0m";
	for (int i = 0; i < 10; i++) {
		animalArr[i] = new Dog(dog);
	}

	std::cout << "\033[1;32m\nFilling the last 10 as Cats\n\n\033[0m";
	for (int i = 10; i < 20; i++) {
		animalArr[i] = new Cat(cat);
	}

	std::cout << "\033[1;32m\nCleaning up the memory\n\n\033[0m";
	for (int i = 0; i < 20; i++) {
		delete animalArr[i];
	}

	return 0;
}
