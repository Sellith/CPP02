/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 20:47:33 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/07/04 00:39:54 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# ifndef DEBUG
#  define DEBUG false
# endif

class Fixed {

public:

	Fixed	( void );
	Fixed	( int intValue );
	Fixed	( float fValue );
	Fixed	( Fixed const & copy );
	~Fixed	( void );

	int		getRawBits ( void ) const;
	void	setRawBits ( int bits );

	static Fixed const &	max ( Fixed const & a, Fixed const & b );
	static Fixed const &	min ( Fixed const & a, Fixed const & b );

	int		toInt ( void ) const;
	float	toFloat ( void ) const;

	Fixed&	operator= ( Fixed const & ref );
	Fixed&	operator+ ( Fixed const & ref );
	Fixed&	operator- ( Fixed const & ref );
	Fixed&	operator* ( Fixed const & ref );
	Fixed&	operator/ ( Fixed const & ref );

	Fixed&	operator++ ( void );
	Fixed&	operator-- ( void );
	Fixed	operator++ ( int );
	Fixed	operator-- ( int );

	bool	operator< ( Fixed const & ref ) const;
	bool	operator> ( Fixed const & ref ) const;
	bool	operator<= ( Fixed const & ref ) const;
	bool	operator>= ( Fixed const & ref ) const;
	bool	operator== ( Fixed const & ref ) const;
	bool	operator!= ( Fixed const & ref ) const;


private:

	int					_Value;
	static int const	_Bits;

} ;

std::ostream&	operator<< (std::ostream & o, Fixed const & ref );

#endif
