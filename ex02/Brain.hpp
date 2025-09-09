/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:42:20 by msuokas           #+#    #+#             */
/*   Updated: 2025/09/09 14:28:40 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain {
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(std::string ideas[]);
		~Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);

		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;
};
