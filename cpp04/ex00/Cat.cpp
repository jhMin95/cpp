//
// Created by jimin on 2022/12/11.
//

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src): Animal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
	type = src.getType();
}

Cat &Cat::operator=(const Cat &rhs) {
	std::cout << "Cat operator= called" << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Meow Meow" << std::endl;
}
