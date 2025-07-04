/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 20:52:20 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/07/04 18:01:58 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a is initialised at :\t\t" << a << std::endl;
	std::cout << "pré incrementation a is :\t" << ++a << std::endl;
	std::cout << "a is :\t\t\t\t" << a << std::endl;
	std::cout << "post incrementation a is :\t" << a++ << std::endl;
	std::cout << "new a is :\t\t\t" << a << std::endl << std::endl;

	std::cout << "a + b : " << "a : " << a << "\tb : " << b << "\tres : " << a + b << std::endl;
	std::cout << "a - b : " << "a : " << a << "\tb : " << b << "\tres : " << a - b << std::endl;
	std::cout << "a * b : " << "a : " << a << "\tb : " << b << "\tres : " << a * b << std::endl;
	std::cout << "a / b : " << "a : " << a << "\tb : " << b << "\tres : " << a / b << std::endl << std::endl;

	std::cout << "b is :\t" << b << std::endl << std::endl;

	std::cout << "Max is :\t\t" << Fixed::max( a, b ) << std::endl;
	std::cout << "Min is :\t\t" << Fixed::min( a, b ) << std::endl;

	a = b;
	std::cout << "\na new value is :\t" << a << std::endl;

	if (a == b)
		std::cout << "\nso, a = b" << std::endl;
	if (a != b)
		std::cout << "\nso, a != b" << std::endl;

	return 0;
}
