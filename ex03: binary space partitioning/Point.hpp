/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:10:32 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/01 19:34:31 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(const float a, const float b);
		Point(Point &copy);
		Point &operator=(Point const &copy);
		~Point();

		Fixed getX() const;
		Fixed getY() const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif