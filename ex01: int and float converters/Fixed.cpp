/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:19:16 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/01 18:34:34 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;	
};

Fixed::Fixed(const Fixed& copy)
{
	value = copy.value;
	std::cout << "Copy constructor called" << std::endl;
};

Fixed &Fixed::operator=(const Fixed &copy)
{
	if (this != &copy)
		this->value = copy.value;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
};

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
};

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
};

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = num << bits;
};

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(num * (1 << bits));
};

float Fixed::toFloat(void) const
{
	return((float)this->value / (float)(1 << bits));
};

int Fixed::toInt(void) const
{
	return(this->value >> bits);
};

std::ostream &operator<<(std::ostream &out, Fixed const &num)
{
	out << num.toFloat();
	return (out);
};