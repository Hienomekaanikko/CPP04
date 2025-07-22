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
	Dog doggo;
	Cat	kitty;
	WrongCat kitty2;

	doggo.makeSound();
	std::cout << "Type of the dog is: " << doggo.getType() << std::endl;
	kitty.makeSound();
	std::cout << "Type of the cat is: " << kitty.getType() << std::endl;
	kitty2.makeSound();
	std::cout << "Type of the animal is: " << kitty2.getType() << std::endl;
}
