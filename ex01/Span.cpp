/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:53:22 by ldepenne          #+#    #+#             */
/*   Updated: 2026/11/18 23:59:35 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _maxsize(0), _vec(0) {}

Span::Span(size_t maxsize) : _maxsize(maxsize), _vec(0) {}

Span::Span(const Span& other) {
	if (this != &other)
	{
		_maxsize = other._maxsize;
		_vec = other._vec;
	}
}

Span	&Span::operator=(const Span& other) {
	if (this != &other) {
		_maxsize = other._maxsize;
		_vec = other._vec;
	}
	return *this;
}

Span::~Span() {};

void	Span::addNumber(int n) {
	if (_vec.size() >= _maxsize)
		throw std::runtime_error("Array is full");
	_vec.push_back(n);
}

/* @brief find the smallest difference between two numbers */
int	Span::shortestSpan() {
	if (_vec.size() < 2)
		throw std::runtime_error("There are not enough elements in the array");

	std::vector<int>	sorted_vec(_vec);
	std::sort(sorted_vec.begin(), sorted_vec.end());
	int	minSpan = sorted_vec[1] - sorted_vec[0];

	for (size_t i = 2; i < sorted_vec.size(); i++) {
		if (sorted_vec[i] - sorted_vec[i - 1] < minSpan)
			minSpan = sorted_vec[i] - sorted_vec[i - 1];
	}
	return minSpan;
}

int	Span::longtestSpan() {
	if (_vec.size() < 2)
		throw std::runtime_error("There are not enough elements in the array");

	std::vector<int>	sorted_vec(_vec);
	std::sort(sorted_vec.begin(), sorted_vec.end());
	int	last_value = sorted_vec.size() - 1;

	return (sorted_vec[last_value] - sorted_vec[0]);
}
