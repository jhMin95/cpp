//
// Created by jimin on 2022/12/05.
//

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor Called" << std::endl;
}

Fixed::Fixed(const int src) {
	_rawBits = src << _MY_FRACTIONAL_BIT_NUM;
	std::cout << "Int constructor Called" << std::endl;
}

Fixed::Fixed(const float src) {
	_rawBits = static_cast<int>(std::roundf(src * (1 << _MY_FRACTIONAL_BIT_NUM)));
	std::cout << "Float constructor Called" << std::endl;
}

Fixed::Fixed(const Fixed & src) {
	*this = src;
	std::cout << "Copy constructor Called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructed Called" << std::endl;
}

int Fixed::getRawBits() const {
	return _rawBits;
}

void Fixed::setRawBits(const int raw) {
	_rawBits = raw;
}

Fixed & Fixed::operator=(const Fixed & src) {
	if (this != &src)
		setRawBits(src._rawBits);
	std::cout << "Copy assignment operator Called" << std::endl;
	return *this;
}

float Fixed::toFloat() const {
	return float(_rawBits) / float(1 << _MY_FRACTIONAL_BIT_NUM);
}

int Fixed::toInt() const {
	return _rawBits >> _MY_FRACTIONAL_BIT_NUM;
}


std::ostream & operator<<(std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return os;
}