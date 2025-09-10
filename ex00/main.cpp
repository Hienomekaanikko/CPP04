/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:23:32 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/10 13:08:57 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

	std::cout << "\033[1;32m\nBasic tests (without set type):\n\n\033[0m";
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "\033[1;32m\n---------------------------------------------------------\n\n\033[0m";

	std::string anim1 = "Non_Specified";
	std::string dog1 = "Nalle_Dog";
	std::string cat1 = "Simba_Cat";

	std::cout << "\033[1;32mType tests (type is set to something else):\n\n\033[0m";
	const Animal* anim = new Animal(anim1);
	const Animal* doggo = new Dog(dog1);
	const Animal* kittie = new Cat(cat1);
	std::cout << "Type of Dog: " << doggo->getType() << " " << std::endl;
	std::cout << "Type of Cat: " << kittie->getType() << " " << std::endl;
	kittie->makeSound();
	doggo->makeSound();
	anim->makeSound();

	delete anim;
	delete doggo;
	delete kittie;

	std::cout << "\033[1;32m\n---------------------------------------------------------\n\033[0m";

	std::cout << "\033[1;32m\nWrongAnimal tests:\n\n\033[0m";
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();
	std::cout << "Type of Cat: " << wcat->getType() << " " << std::endl;
	wcat->makeSound();
	wmeta->makeSound();

	delete wmeta;
	delete wcat;

	std::cout << "\033[1;32m\n---------------------------------------------------------\n\033[0m";

	std::cout << "\033[1;32m\nCopy constructor tests:\n\n\033[0m";

	std::string dog2 = "Grumpy_Dog";
	std::string cat2 = "Fluffer_Cat";
	std::string wrongcat1 = "Wrong_Cat";

	Dog originalDog(dog2);
	Dog copyDog(originalDog);

	Cat originalCat(cat2);
	Cat copyCat = originalCat;
	WrongCat originalWrongCat(wrongcat1);
	WrongCat copyWrongCat(originalWrongCat);

	std::cout << "\nTesting copied dog:\n";
	copyDog.makeSound();
	std::cout << "Type: " << copyDog.getType() << std::endl;

	std::cout << "\nTesting copied cat:\n";
	copyCat.makeSound();
	std::cout << "Type: " << copyCat.getType() << std::endl;

	std::cout << "\nTesting copied WrongCat:\n";
	copyWrongCat.makeSound();
	std::cout << "Type: " << copyWrongCat.getType() << std::endl;

	std::cout << "\033[1;32m\n---------------------------------------------------------\n\033[0m";

	std::cout << "\033[1;32m\nCopy assignment operator tests:\n\n\033[0m";

	Dog anotherDog;
	anotherDog = originalDog;

	Cat anotherCat;
	anotherCat = originalCat;

	WrongCat anotherWrongCat;
	anotherWrongCat = originalWrongCat;

	std::cout << "\nTesting assigned dog:\n";
	anotherDog.makeSound();
	std::cout << "Type: " << anotherDog.getType() << std::endl;

	std::cout << "\nTesting assigned cat:\n";
	anotherCat.makeSound();
	std::cout << "Type: " << anotherCat.getType() << std::endl;

	std::cout << "\nTesting assigned wrongcat:\n";
	anotherWrongCat.makeSound();
	std::cout << "Type: " << anotherWrongCat.getType() << std::endl;

	std::cout << "\033[1;32m\n---------------------------------------------------------\n\n\033[0m";

	return 0;
}
