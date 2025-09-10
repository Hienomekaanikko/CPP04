/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:23:32 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/10 13:13:39 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

	std::cout << "\033[1;32m\nSetting up dog 'Nalle' and cat 'Nala'\n\n\033[0m";
	std::string dog = "Nalle_Dog";
	std::string cat = "Simba_Cat";

	Dog newDog(dog);
	Cat newCat(cat);

	std::cout << "\033[1;32m\nMaking sure that correct sounds come out\n\n\033[0m";

	newDog.makeSound();
	newCat.makeSound();

	std::cout << "\033[1;32m\n****Setting up thoughts for the brain of 'Nalle_Dog'****\n\033[0m";
	for (int i = 0; i < 100; i++) {
		newDog.setIdea(i, "💭 Wow a ball! 💭");
	}

	std::cout << "\033[1;32m\nReading the thoughts from the brain of 'Nalle_Dog'\n\n\033[0m";
	for (int i = 0; i < 100; i++) {
		std::cout << i + 1 << ": ";
		std::cout << newDog.getIdea(i) << std::endl;
	}

	std::cout << "\033[1;32m\n---------------------------------------------------------\n\033[0m";

	std::cout << "\033[1;32m\n****Setting up thoughts for the brain of 'Simba_Cat'****\n\033[0m";
	for (int i = 0; i < 100; i++) {
		newCat.setIdea(i, "💭 Thinking about pushing this wicked thing off the table 💭");
	}

	std::cout << "\033[1;32m\nReading the thoughts from the brain of 'Simba_Cat'\n\n\033[0m";
	for (int i = 0; i < 100; i++) {
		std::cout << i + 1 << ": ";
		std::cout << newCat.getIdea(i) << std::endl;
	}

	std::cout << "\033[1;32m\n---------------------------------------------------------\n\033[0m";

	std::cout << "\033[1;32m\nSetting up an array of 20 Animal objects\n\033[0m";

	Animal* animalArr[20];
	std::cout << "\033[1;32m\nFilling the first 10 as Dogs\n\n\033[0m";
	for (int i = 0; i < 10; i++) {
		animalArr[i] = new Dog(dog);
		animalArr[i]->setIdea(0, "💭 Wow a ball! 💭");
	}

	std::cout << "\033[1;32m\nFilling the last 10 as Cats\n\n\033[0m";
	for (int i = 10; i < 20; i++) {
		animalArr[i] = new Cat(cat);
		animalArr[i]->setIdea(0, "💭 Thinking about pushing this wicked thing off the table 💭");
	}

	std::cout << "\033[1;32m\nChecking the thoughts of the 20 animals\n\n\033[0m";
	for (int i = 0; i < 20; i++) {
		std::cout << animalArr[i]->getType() << i + 1 << " has an idea: " << animalArr[i]->getIdea(0) << "\n";
	}

	std::cout << "\033[1;32m\nChanging two and seeing if that affects the others (Deep copy if only two changes) \n\n\033[0m";
	animalArr[7]->setIdea(0, "💭 Woah, is that a sausage?! 💭");
	animalArr[14]->setIdea(0, "💭 I think my owners would enjoy this furry mouse on their bed 💭");
	for (int i = 0; i < 20; i++) {
		std::cout << animalArr[i]->getType() << i + 1 << " has an idea: " << animalArr[i]->getIdea(0) << "\n";
	}

	std::cout << "\033[1;32m\nCleaning up the memory\n\n\033[0m";
	for (int i = 0; i < 20; i++) {
		delete animalArr[i];
	}

	std::cout << "\033[1;32m\n---------------------------------------------------------\n\033[0m";

	std::cout << "\033[1;32m\nTesting Dog Copy Constructor\n\n\033[0m";

	Dog copyDog(newDog);

	std::cout << "Original Dog Thought [at index 0]: " << newDog.getIdea(0) << std::endl;
	std::cout << "Copied Dog Thought   [at index 0]: " << copyDog.getIdea(0) << std::endl;

	newDog.setIdea(0, "💭 I'm thinking something new! 💭");

	std::cout << "\nAfter changing original Dog's idea:\n";
	std::cout << "Original Dog Thought [at index 0]: " << newDog.getIdea(0) << std::endl;
	std::cout << "Copied Dog Thought   [at index 0]: " << copyDog.getIdea(0) << std::endl;

	std::cout << "\033[1;32m\nTesting Dog Copy Assignment Operator\n\n\033[0m";
	Dog assignedDog;
	assignedDog = newDog;

	std::cout << "Original Dog Thought [at index 1]: " << newDog.getIdea(1) << std::endl;
	std::cout << "Assigned Dog Thought [at index 1]: " << assignedDog.getIdea(1) << std::endl;

	newDog.setIdea(1, "💭 I want treats now 💭");

	std::cout << "\nAfter changing original Dog's idea:\n\n";
	std::cout << "Original Dog Thought [at index 1]: " << newDog.getIdea(1) << std::endl;
	std::cout << "Assigned Dog Thought [at index 1]: " << assignedDog.getIdea(1) << std::endl;

	std::cout << "\033[1;32m\n---------------------------------------------------------\n\n\033[0m";

	std::cout << "\033[1;32m\nTesting Cat Copy Constructor\n\n\033[0m";

	Cat copyCat(newCat);

	std::cout << "Original Cat Thought [at index 0]: " << newCat.getIdea(0) << std::endl;
	std::cout << "Copied Cat Thought   [at index 0]: " << copyCat.getIdea(0) << std::endl;

	newCat.setIdea(0, "💭 I'm thinking something new! 💭");

	std::cout << "\nAfter changing original Cat's idea:\n";
	std::cout << "Original Cat Thought [at index 0]: " << newCat.getIdea(0) << std::endl;
	std::cout << "Copied Cat Thought   [at index 0]: " << copyCat.getIdea(0) << std::endl;

	std::cout << "\033[1;32m\nTesting Cat Copy Assignment Operator\n\n\033[0m";
	Cat assignedCat;
	assignedCat = newCat;

	std::cout << "Original Cat Thought [at index 1]: " << newCat.getIdea(1) << std::endl;
	std::cout << "Assigned Cat Thought [at index 1]: " << assignedCat.getIdea(1) << std::endl;

	newCat.setIdea(1, "💭 I want out now 💭");

	std::cout << "\nAfter changing original Cat's idea:\n\n";
	std::cout << "Original Cat Thought [at index 1]: " << newCat.getIdea(1) << std::endl;
	std::cout << "Assigned Cat Thought [at index 1]: " << assignedCat.getIdea(1) << std::endl;

	std::cout << "\033[1;32m\n---------------------------------------------------------\n\n\033[0m";

	return 0;
}
