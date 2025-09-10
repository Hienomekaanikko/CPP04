/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:21:49 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/10 14:43:50 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
	private:
		Brain* mind;
	public:
		Dog();
		Dog(const std::string& type);
		virtual ~Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);

		virtual void makeSound() const override;
		virtual std::string getIdea(int index) const;
		virtual void setIdea(int index, std::string idea);
};
