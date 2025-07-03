/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:07:15 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/07/03 21:30:05 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_bits = 8;

Fixed::Fixed( void ) : _Value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const intValue ) : _Value(intValue << _bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const floatValue ) : _Value(roundf( floatValue * ( 1 << _bits ))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &copy) {
	if ( this != &copy )
		std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=( Fixed const & src ) {
	std::cout << "Copy assignment operator called" << std::endl;
	_Value = src.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const {
	return (_Value);
}

float Fixed::toFloat( void ) const {
	return ((float)_Value / (1 << _bits));
}

int	Fixed::toInt( void ) const {
	return (_Value / (1 << _bits));
}

std::ostream& operator<<( std::ostream &o, Fixed const & src ) {
	o << src.toFloat();
	return (o);
}
