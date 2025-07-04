/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 20:52:20 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/07/04 20:57:12 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main( void ) {

	Point const	a( 0.0f, 0.0f );
	Point const	b( 0.0f, 4.0f );
	Point const	c( 4.0f, 0.0f );
	Point const	point( 3.0f, 1.0f );
	if ( bsp( a, b, c, point ))
		std::cout << ISIN << std::endl;
	else
		std::cout << ISOUT << std::endl;

	return 0;
}
