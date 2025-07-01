/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 00:13:56 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/07/02 01:50:31 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : nmb(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed &cp ) : nmb(cp.getRawBits()) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (nmb);
}

void Fixed::setRawBits( int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	nmb = raw;
}

Fixed& Fixed::operator=( Fixed const &raw ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->nmb = raw.getRawBits();
	return (*this);
}
