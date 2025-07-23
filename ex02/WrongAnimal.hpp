/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:59:48 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/22 15:00:54 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal {
	protected:
		std::string _type;
	public:
		//constructor
		WrongAnimal();
		//destructor
		virtual ~WrongAnimal();
		//copy constructor
		WrongAnimal(const WrongAnimal &other);
		//copy assignment operator
		WrongAnimal& operator=(const WrongAnimal &other);
		//methods
		virtual void makeSound(void) const;
		virtual const std::string &getType(void) const;
};

#endif

