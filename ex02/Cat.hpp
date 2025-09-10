/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:20:22 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/10 14:48:45 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal {
	private:
		Brain* mind;
	public:
		Cat();
		Cat(const std::string& type);
		virtual ~Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);

		void makeSound() const override;
		std::string getIdea(int index) const;
		void setIdea(int index, std::string idea);
};
