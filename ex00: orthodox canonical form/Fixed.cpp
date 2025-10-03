/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:00:07 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/01 18:25:19 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;	
};

Fixed::Fixed(Fixed& num)
{
	value = num.value;
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
	this->value = raw;
	std::cout << "setRawBits member function called" << std::endl;
};