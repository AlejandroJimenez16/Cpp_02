/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 13:26:50 by alejandj          #+#    #+#             */
/*   Updated: 2026/03/03 15:08:42 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << BOLD << MAGENTA << "Default constructor called" << RESET << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed& object)
{
	std::cout << BOLD << BLUE << "Copy constructor called" << RESET << std::endl;
	*this = object;
}

Fixed& Fixed::operator=(const Fixed& object)
{
	std::cout << BOLD << YELLOW << "Copy assignment operator called" << RESET << std::endl;
	if (this != &object)
		_value = object.getRawBits();

	return (*this);
}

Fixed::~Fixed()
{
	std::cout << BOLD << RED << "Destructor called" << RESET << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << BOLD << GREEN << "getRawBits member function called" << RESET << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}
