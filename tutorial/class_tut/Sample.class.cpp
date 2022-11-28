#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( float const f ) : pi( f ), qd( 42 ) {

	std::cout << "Constructor called" << std::endl;
	return;

}

Sample::~Sample( void ) {

	std::cout << "destructor called" << std::endl;
	return;

}

void	Sample::bar( void ) const {

	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

	// this->qd = 0; 불가능

	return;

}
