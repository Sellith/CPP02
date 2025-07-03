/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 00:03:04 by lvan-bre          #+#    #+#             */
/*   Updated: 2025/07/04 00:43:03 by lvan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {

public:

	Point ( void );
	Point ( float const x, float const y );
	Point ( Point const & src );
	~Point ( void );

	Point&	operator=( Point const & src );

	Fixed	getx ( void );
	Fixed	gety ( void );

private:

	Fixed const _x;
	Fixed const _y;

} ;

#endif
