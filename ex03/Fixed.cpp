/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 20:47:20 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/07/04 20:19:57 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_Bits = 8;

Fixed::Fixed( void ) : _Value(0) {
	if ( DEBUG )
		std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int intValue ) : _Value( intValue ) {
	if ( DEBUG )
		std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float fValue ) : _Value( roundf( fValue * ( 1 << _Bits ))) {
	if ( DEBUG )
		std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & copy ) {
	if ( this != &copy )
		*this = copy;
	if ( DEBUG )
			std::cout << "Copy constructor called" <<std::endl;
}

Fixed::~Fixed( void ) {
	if ( DEBUG )
		std::cout << "Destructor called" << std::endl;
}



Fixed const &	Fixed::max( Fixed const & a, Fixed const & b ) {
	if ( a > b )
		return ( a );
	else
		return ( b );
}

Fixed const &	Fixed::min( Fixed const & a, Fixed const & b ) {
	if ( a < b )
		return ( a );
	else
		return ( b );
}

float	Fixed::toFloat( void ) const {
	return (( float )_Value / ( 1 << _Bits ));
}

int	Fixed::getRawBits( void ) const {
	return ( _Value );
}

void	Fixed::setRawBits( int bits ) {
	_Value = bits;
}


Fixed&	Fixed::operator=( Fixed const & ref ) {
	if ( DEBUG )
		std::cout << "Assignation operator (=) called" << std::endl;
	_Value = ref.getRawBits();
	return ( *this );
}

Fixed&	Fixed::operator+( Fixed const & ref ) {
	if ( DEBUG )
		std::cout << "Arithmetic operator (+) called" << std::endl;
	_Value += ref._Value;
	return ( *this  );
}

Fixed&	Fixed::operator-( Fixed const & ref ) {
	if ( DEBUG )
		std::cout << "Arithmetic operator (-) called" << std::endl;
	_Value -= ref._Value;
	return ( *this );
}

Fixed&	Fixed::operator*( Fixed const & ref ) {
	if ( DEBUG )
		std::cout << "Arithmetic operator (*) called" << std::endl;
	_Value *= ref._Value;
	return ( *this );
}

Fixed&	Fixed::operator/( Fixed const & ref ) {
	if ( DEBUG )
		std::cout << "Arithmetic operator (/) called" << std::endl;
	_Value /= ref._Value;
	return ( *this );
}

Fixed&	Fixed::operator++( void ) {
	if ( DEBUG )
		std::cout << "Arithmetic operator (++.) called" << std::endl;
	++_Value;
	return ( *this );
}

Fixed&	Fixed::operator--( void ) {
	if ( DEBUG )
		std::cout << "Arithmetic operator (--.) called" << std::endl;
	--_Value;
	return ( *this );
}

Fixed	Fixed::operator--( int ) {
	if ( DEBUG )
		std::cout << "Arithmetic operator (.--) called" << std::endl;
	Fixed const tmp( *this );
	--( *this );
	return (tmp);
}

Fixed	Fixed::operator++( int ) {
	if ( DEBUG )
		std::cout << "Arithmetic operator (.++) called" << std::endl;
	Fixed const tmp( *this );
	++( *this );
	return (tmp);
}

bool	Fixed::operator<( Fixed const & ref ) const {
	if ( DEBUG )
		std::cout << "Comparison operator (<) called" << std::endl;
	if ( this->_Value < ref._Value )
		return ( true );
	else
		return ( false );
}

bool	Fixed::operator>( Fixed const & ref ) const {
	if ( DEBUG )
		std::cout << "Comparison operator (>) called" << std::endl;
	if ( this->_Value > ref._Value )
		return ( true );
	else
		return ( false );
}

bool	Fixed::operator<=( Fixed const & ref ) const {
	if ( DEBUG )
		std::cout << "Comparison operator (<=) called" << std::endl;
	if ( this->_Value <= ref._Value )
		return ( true );
	else
		return ( false );
}

bool	Fixed::operator>=( Fixed const & ref ) const {
	if ( DEBUG )
		std::cout << "Comparison operator (>=) called" << std::endl;
	if ( this->_Value >= ref._Value )
		return ( true );
	else
		return ( false );
}

bool	Fixed::operator==( Fixed const & ref ) const {
	if ( DEBUG )
		std::cout << "Comparison operator (==) called" << std::endl;
	if ( this->_Value == ref._Value )
		return ( true );
	else
		return ( false );
}

bool	Fixed::operator!=( Fixed const & ref ) const {
	if ( DEBUG )
		std::cout << "Comparison operator (!=) called" << std::endl;
	if ( this->_Value != ref._Value )
		return ( true );
	else
		return ( false );
}

std::ostream&	operator<<(std::ostream& out, Fixed const & ref ) {
	out << ref.toFloat();
	return ( out );
}
