/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:21:49 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/10 14:49:33 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal {
	private:
		Brain* mind;
	public:
		Dog();
		Dog(const std::string& type);
		virtual ~Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);

		void makeSound() const override;
		std::string getIdea(int index) const;
		void setIdea(int index, std::string idea);
};
