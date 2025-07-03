/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:07:29 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/07/03 02:01:17 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

public:

	Fixed	( void );
	Fixed	( int const intValue );
	Fixed	(float const FloatValue );
	Fixed	( Fixed const &copy );
	~Fixed	( void );

	Fixed&	operator= ( Fixed const &src );

	int		getRawBits ( void ) const;

	float	toFloat( void ) const;
	int		toInt( void ) const;

private:

	static int const	_bits;
	int					_Value;

} ;

std::ostream &operator<<( std::ostream &o, Fixed const &src );

#endif
