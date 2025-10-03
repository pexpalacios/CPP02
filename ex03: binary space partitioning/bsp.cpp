/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:10:00 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/01 19:14:24 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed p1, p2, p3;
	bool neg, pos;

	p1 = (((point.getX() - b.getX()) * (a.getY() - b.getY())) - ((a.getX() - b.getX())*(point.getY() - b.getY())));
	p2 = (((point.getX() - c.getX()) * (b.getY() - c.getY())) - ((b.getX() - c.getX())*(point.getY() - c.getY())));
	p3 = (((point.getX() - a.getX()) * (c.getY() - a.getY())) - ((c.getX() - a.getX())*(point.getY() - a.getY())));

	neg = (p1 < 0) || (p2 < 0) || (p3 < 0);
	pos = (p1 > 0) || (p2 > 0) || (p3 > 0);
	
	return !(neg && pos);
}