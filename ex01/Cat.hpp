/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:20:22 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/10 14:43:04 by msuokas          ###   ########.fr       */
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
		Cat(const std::string& type);
		virtual ~Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);

		virtual void makeSound() const override;
		virtual std::string getIdea(int index) const;
		virtual void setIdea(int index, std::string idea);
};
