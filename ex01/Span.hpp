/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 19:16:31 by ldepenne          #+#    #+#             */
/*   Updated: 2026/11/19 11:59:21 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class	Span {
	public:
		Span();
		Span(size_t maxsize);
		Span(const Span& other);
		Span &operator=(const Span& other);
		~Span();

		void	addNumber(int start, int end);
		void	addNumber(int n);
		int		shortestSpan() const;
		int		longtestSpan() const;

	private:
		size_t				_maxsize;
		std::vector<int>	_vec;
};

#endif