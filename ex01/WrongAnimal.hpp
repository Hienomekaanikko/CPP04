/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:52:29 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/10 12:46:40 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const std::string& type);
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);

		const std::string& getType() const;
		void makeSound() const;
};
