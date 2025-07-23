#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Calling constructor on Brain" << std::endl;
}

Brain::~Brain() {
	std::cout << "Calling destructor on Brain" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Calling copy constructor on Brain" << std::endl;
	for (int i = 0; i < 100; ++i) {
		ideas[i] = other.ideas[i];
	}
}

Brain& Brain::operator=(const Brain &other) {
	std::cout << "Calling copy assignment operator on Brain" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; ++i) {
			ideas[i] = other.ideas[i];
		}
	}
	return *this;
}
