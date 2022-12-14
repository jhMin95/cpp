//
// Created by jimin on 2022/12/02.
//

#include "Weapon.hpp"

const std::string &Weapon::getType() const {
	return type;
}

void Weapon::setType(const std::string &type) {
	Weapon::type = type;
}

Weapon::Weapon(const std::string &type) : type(type) {
	std::cout << "Weapon " << this->type << " is construted" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon " << this->type << " is destruted" << std::endl;
}
