/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 00:03:04 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/07/04 20:28:02 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# define LINE "\033[93mWarning:\033[0m\nPlease don't enter a straight line !"
# define ISIN "\033[92mThe point is in the triangle !\033[0m"
# define ISOUT "\033[91mThe point is NOT in the triangle !\033[0m"

class Point {

public:

	Point	( void );
	Point	( float const x, float const y );
	Point	( Point const & src );
	~Point	( void );

	Point const &	operator=( Point const & src );

	Fixed	getx ( void ) const;
	Fixed	gety ( void ) const;

private:

	Fixed const _x;
	Fixed const _y;

} ;

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
