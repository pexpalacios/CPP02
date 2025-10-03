/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:10:13 by penpalac          #+#    #+#             */
/*   Updated: 2025/09/08 19:12:30 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        static const int bits = 8;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed &operator=(const Fixed &copy);
		~Fixed();
        Fixed(const int num);
        Fixed (const float num);

		bool	operator<(Fixed const &num) const;
		bool	operator>(Fixed const &num) const;
		bool	operator<=(Fixed const &num) const;
		bool	operator>=(Fixed const &num) const;
		bool	operator==(Fixed const &num) const;
		bool	operator!=(Fixed const &num) const;
		Fixed 	operator=(Fixed const &num) const;
		Fixed	operator+(Fixed const &num) const;
		Fixed	operator-(Fixed const &num) const;
		Fixed	operator*(Fixed const &num) const;
		Fixed	operator/(Fixed const &num) const;
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);
        
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed const &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static Fixed const &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, Fixed const &num);

#endif