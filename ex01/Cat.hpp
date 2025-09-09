/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:20:22 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/09 14:34:58 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain* mind;
	public:
		Cat();
		Cat(std::string& type);
		~Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);

		void makeSound() const override;
		std::string getIdea(int index) const;
		void setIdea(int index, std::string idea);
};
