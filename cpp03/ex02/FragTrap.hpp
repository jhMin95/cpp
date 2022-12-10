//
// Created by jimin on 2022/12/08.
//

#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

public:
	// orthodox canonical form
	FragTrap();
	explicit FragTrap(const std::string &name);
	FragTrap(const FragTrap &src);
	FragTrap &operator=(FragTrap const & rhs);
	~FragTrap();

	//	required function
	void highFivesGuys();

	//	my function
	void print(const std::string & variableName);
};


#endif //CPP_FRAGTRAP_HPP
