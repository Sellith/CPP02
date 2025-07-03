/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 00:15:10 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/07/04 00:42:58 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {
	if (DEBUG)
		std::cout << "Default constructor called" << std::endl;
}

Point::Point( float const x, float const y) : _x(x), _y(y) {
	if (DEBUG)
		std::cout << "Float constructor called" << std::endl;
}

Point::Point( Point const & src ) {
	if (DEBUG)
		std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Point::~Point( void ) {
	if (DEBUG)
		std::cout << "Destructor called" << std::endl;
}


Fixed Point::getx( void ) {
	return (_x);
}

Fixed Point::gety( void ) {
	return (_y);
}


Point& Point::operator=( Point const & src ) {
	if (DEBUG)
		std::cout << "Assignation operator called but useless because members are const." << std::endl;
	(void)src;
}
