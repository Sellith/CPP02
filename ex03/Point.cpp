/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 00:15:10 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/07/04 20:53:22 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {
	if ( DEBUG )
		std::cout << "Default constructor called" << std::endl;
}

Point::Point( float const x, float const y) : _x(x), _y(y) {
	if ( DEBUG )
		std::cout << "Float constructor called" << std::endl;
}

Point::Point( Point const & src ) : _x(src._x), _y(src._y) {
	if ( DEBUG )
		std::cout << "Copy constructor called" << std::endl;
}

Point::~Point( void ) {
	if ( DEBUG )
		std::cout << "Destructor called" << std::endl;
}


Fixed Point::getx( void ) const {
	return ( _x );
}

Fixed Point::gety( void ) const {
	return ( _y );
}


Point const &	Point::operator=( Point const & src ) {
	if ( DEBUG )
		std::cout << "Assignation operator called" << std::endl;

	( void )src;
	return ( *this );
}
