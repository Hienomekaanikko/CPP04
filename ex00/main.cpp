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

int	main(void){
	Dog doggie;
	Cat	cat;

	doggie.makeSound();
	std::cout << "Type of the dog is: " << doggie.getType() << std::endl;
	cat.makeSound();
	std::cout << "Type of the cat is: " << cat.getType() << std::endl;
}
