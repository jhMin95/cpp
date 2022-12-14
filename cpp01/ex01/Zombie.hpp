//
// Created by jimin on 2022/12/02.
//

#ifndef CPP_ZOMBIE_HPP
#define CPP_ZOMBIE_HPP

#include <iostream>

class Zombie {

public:

	explicit Zombie();
	virtual ~Zombie();

	void Announce();

	//getter
	const std::string &getName() const;

	//setter
	void setName(const std::string &name);

private:

	std::string	name;

};

Zombie*	newZombie(std::string name);
void randomChump(std::string name);
Zombie* zombieHorde( int N, std::string name );

#endif //CPP_ZOMBIE_HPP
