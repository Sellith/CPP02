/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 00:08:18 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/07/02 01:46:30 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

public:

	Fixed ( void );
	Fixed ( Fixed &cp);
	~Fixed ( void );

	int		getRawBits ( void ) const;
	void	setRawBits ( int const raw);

	Fixed& operator=( Fixed const &raw );

private:

	int					nmb;
	static int const	bits = 8;

};

#endif
