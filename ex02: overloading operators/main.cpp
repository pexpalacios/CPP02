/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:46:29 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/01 19:11:02 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "a: " << a << std::endl;
	std::cout << "=== ++a OPERATOR ===" << std::endl;
	std::cout << "a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "=== a++ OPERATOR ===" << std::endl;
	std::cout << "a: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "=== --a OPERATOR ===" << std::endl;
	std::cout << "a: " << --a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "=== a-- OPERATOR ===" << std::endl;
	std::cout << "a: " << a-- << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "=== BOOLEANS ===" << std::endl;
	std::cout << "a: " << a << "  b: " << b << std::endl;
	std::cout << "a < b is " << (a < b) << std::endl;
	std::cout << "a > b is " << (a > b) << std::endl;
	std::cout << "a == b is " << (a == b) << std::endl;
	std::cout << "a != b is " << (a != b) << std::endl;
	std::cout << "=== ARITHMETIC OPERATORS ===" << std::endl;
	std::cout << "a + b is " << (a + b) << std::endl;
	std::cout << "a - b is " << (a - b) << std::endl;
	std::cout << "a * b is " << (a * b) << std::endl;
	std::cout << "a / b is " << (a / b) << std::endl;
	std::cout << "=== MAX&MIN ===" << std::endl;
	std::cout << "max between a(" << a << ") and b(" << b << ") is " << Fixed::max(a, b) << std::endl;
	std::cout << "min between a(" << a << ") and b(" << b << ") is " << Fixed::min(a, b) << std::endl;

	return (0);
};