/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:08:22 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/09 15:22:06 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal {
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(const std::string& type);
		virtual ~AAnimal();
		AAnimal(AAnimal& other);
		AAnimal& operator=(const AAnimal& other);

		const std::string& getType() const;
		virtual void makeSound() const = 0;
};
