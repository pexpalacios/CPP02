/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:46:34 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/01 18:40:27 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
};

Fixed::Fixed(const Fixed& copy)
{
	value = copy.value;
};

Fixed &Fixed::operator=(const Fixed &copy)
{
	if (this != &copy)
		this->value = copy.value;
	return (*this);
};

Fixed::~Fixed()
{};

int Fixed::getRawBits(void) const
{
    return (this->value);
};

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
};

Fixed::Fixed(const int num)
{
	this->value = num << bits;
};

Fixed::Fixed(const float num)
{
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

bool Fixed::operator<(Fixed const &num) const
{
	if (this->getRawBits() < num.getRawBits())
		return (true);
	return (false);
};

bool Fixed::operator>(Fixed const &num) const
{
	if (this->getRawBits() > num.getRawBits())
		return (true);
	return (false);
};

bool Fixed::operator<=(Fixed const &num) const
{
	if (this->getRawBits() <= num.getRawBits())
		return (true);
	return (false);
};

bool Fixed::operator>=(Fixed const &num) const
{
	if (this->getRawBits() >= num.getRawBits())
		return (true);
	return (false);
};

bool Fixed::operator==(Fixed const &num) const
{
	if (this->getRawBits() == num.getRawBits())
		return (true);
	return (false);
};

bool Fixed::operator!=(Fixed const &num) const
{
	if (this->getRawBits() != num.getRawBits())
		return (true);
	return (false);
};

Fixed Fixed::operator+(Fixed const &num) const
{
	return (Fixed(this->toFloat() + num.toFloat()));
};

Fixed Fixed::operator-(Fixed const &num) const
{
	return (Fixed(this->toFloat() - num.toFloat()));
};

Fixed Fixed::operator*(Fixed const &num) const
{
	return (Fixed(this->toFloat() * num.toFloat()));
};

Fixed Fixed::operator/(Fixed const &num) const
{
	return (Fixed(this->toFloat() / num.toFloat()));
};

Fixed &Fixed::operator++()
{
	this->value++;
	return (*this);
};

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->value++;
	return (tmp);
};

Fixed &Fixed::operator--()
{
	this->value--;
	return (*this);
};

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->value--;
	return (tmp);	
};

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
};

Fixed const &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
};

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
};

Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
};