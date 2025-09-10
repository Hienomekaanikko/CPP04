/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:23:32 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/10 14:11:35 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

	std::cout << "\033[1;32m\nSetting up dog 'Nalle' and cat 'Simba'\n\n\033[0m";
	std::string dog = "Nalle";
	std::string cat = "Simba";

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

	std::cout << "\033[1;32m\n****Setting up thoughts for the brain of 'Simba'****\n\033[0m";
	for (int i = 0; i < 100; i++) {
		newCat.setIdea(i, "💭 Thinking about pushing this wicked thing off the table 💭");
	}

	std::cout << "\033[1;32m\nReading the thoughts from the brain of 'Simba'\n\n\033[0m";
	for (int i = 0; i < 100; i++) {
		std::cout << i + 1 << ": ";
		std::cout << newCat.getIdea(i) << std::endl;
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

	std::cout << "\nAfter changing original Dog's idea:\n";
	std::cout << "Original Dog Thought [at index 1]: " << newDog.getIdea(1) << std::endl;
	std::cout << "Assigned Dog Thought [at index 1]: " << assignedDog.getIdea(1) << std::endl;

	std::cout << "\033[1;32m\n---------------------------------------------------------\n\033[0m";

	std::cout << "\033[1;32m\nUncomment the attempt to create an AAnimal object to make sure that it won't compile (as it shouldnt)\n\n\033[0m";
	// AAnimal newAnimal(dog);

	//std::cout << "\033[1;32m\nSetting up an array of 20 Animal objects\n\n\033[0m";

	// Animal* animalArr[20];
	// std::cout << "\033[1;32m\nFilling the first 10 as Dogs\n\n\033[0m";
	// for (int i = 0; i < 10; i++) {
	// 	animalArr[i] = new Dog(dog);
	// }

	// std::cout << "\033[1;32m\nFilling the last 10 as Cats\n\n\033[0m";
	// for (int i = 10; i < 20; i++) {
	// 	animalArr[i] = new Cat(cat);
	// }

	// std::cout << "\033[1;32m\nCleaning up the memory\n\n\033[0m";
	// for (int i = 0; i < 20; i++) {
	// 	delete animalArr[i];
	// }

	std::cout << "\033[1;32m\nDestroying all stuff in the exit\n\n\033[0m";
	return 0;
}
