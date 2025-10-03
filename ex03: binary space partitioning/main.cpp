/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:30:28 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/01 19:35:03 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point a(2,2);
	Point b(3,4);
	Point c(5,1);

	Point pt1(1,1);
	Point pt2(3,3);

	
	std::cout << "pt1(1,1) is inside triangle a(2,2) b(3,4) c(5,1): " << bsp(a,b,c,pt1) << std::endl;
	std::cout << "pt2(3,3) is inside triangle a(2,2) b(3,4) c(5,1): " << bsp(a,b,c,pt2) << std::endl;
};