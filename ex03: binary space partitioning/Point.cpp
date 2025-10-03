/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:43:11 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/02 16:08:52 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0)
{};

Point::~Point()
{};

Point::Point(const float a, const float b):x(a),y(b)
{};

Point::Point(Point &copy)
{
	*this = copy;
};

Point &Point::operator=(Point const &copy)
{
	if (this != &copy)
		new (this) Point(copy.getX().toFloat(), copy.getY().toFloat());
	return (*this);
};

Fixed Point::getX() const 
{
	return (this->x);
};

Fixed Point::getY() const
{
	return (this->y);
};