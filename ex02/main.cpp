/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:23:32 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/09 15:37:14 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
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

	std::cout << "\033[1;32m\nTesting that we are able to use the derived classes cat and dog'\n\n\033[0m";
	newDog.makeSound();
	newCat.makeSound();

	std::cout << "\033[1;32m\nUncomment the attempt to create an AAnimal object to make sure that it won't compile (as it shouldnt)\n\n\033[0m";
	// AAnimal newAnimal(dog);

	std::cout << "\033[1;32m\nDestroying all stuff in the exit\n\n\033[0m";
	return 0;
}
