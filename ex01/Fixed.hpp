/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 16:10:46 by alejandj          #+#    #+#             */
/*   Updated: 2026/03/07 20:31:36 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define RESET   "\033[0m"
#define BOLD	"\033[1m"

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"

class Fixed
{
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;

	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed& object);
		Fixed& operator=(const Fixed& object);
		~Fixed();
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		
		float toFloat(void) const;
		int toInt( void ) const;
};

/*
* Overload the << operator to print Fixed objects
* Parameters:
*	- out -> output stream where the object will be inserted (std::cout, ofstream, etc.)
*	- object -> Fixed objct that will be printed
*
* Return:
* 	-> Returns the same output stream to allow chaining of insertion operations
*/
std::ostream &operator<<(std::ostream &out, const Fixed& object);

#endif