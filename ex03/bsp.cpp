/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <=lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 17:27:09 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/07/04 19:30:36 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	vector_product( Point const & v1, Point const & v2 ) {
	return (v1.getx().toFloat() * v2.gety().toFloat() - v1.gety().toFloat() * v2.getx().toFloat());
}

bool	bsp( Point const a, Point const b, Point const c, Point const point) {

	if ((a.getx() == b.getx() && b.getx() == c.getx())
		|| (a.gety() == b.gety() && b.gety() == c.gety())
		|| (a.getx() == b.getx() && a.gety() == b.gety())
		|| (c.getx() == b.getx() && c.gety() == b.gety())
		|| (a.getx() == c.getx() && a.gety() == c.gety())) {
		std::cout << LINE << std::endl;
		return (false);
	}

	Point const	AB(b.getx().toFloat() - a.getx().toFloat(), b.gety().toFloat() - a.gety().toFloat());
	Point const BC(c.getx().toFloat() - b.getx().toFloat(), c.gety().toFloat() - b.gety().toFloat());
	Point const CA(a.getx().toFloat() - c.getx().toFloat(), a.gety().toFloat() - c.gety().toFloat());

	Point const AP(point.getx().toFloat() - a.getx().toFloat(), point.gety().toFloat() - a.gety().toFloat());
	Point const BP(point.getx().toFloat() - b.getx().toFloat(), point.gety().toFloat() - b.gety().toFloat());
	Point const CP(point.getx().toFloat() - c.getx().toFloat(), point.gety().toFloat() - c.gety().toFloat());

	Fixed const vProd1 = vector_product( AB, AP );
	Fixed const vProd2 = vector_product( BC, BP );
	Fixed const vProd3 = vector_product( CA, CP );

	if ((vProd1 <= 0 && vProd2 <= 0 && vProd3 <= 0) ||
		(vProd1 >= 0 && vProd2 >= 0 && vProd3 >= 0))
		return (true);

	return (false);
}
