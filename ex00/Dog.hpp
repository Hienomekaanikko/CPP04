/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:21:49 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/10 14:46:01 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog();
		Dog(const std::string& type);
		virtual ~Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);

		virtual void makeSound() const;
};
