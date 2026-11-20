/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 09:14:11 by ldepenne          #+#    #+#             */
/*   Updated: 2026/11/20 16:35:36 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

# define COLOR "\033[0;38;5;12m"
# define NC "\033[0m"

class	NotFound : public std::exception {
	public:
		const char* what() const throw();
};

template <typename T>
typename T::iterator	easyfind(T& containt, int value);

# include "easyfind.tpp"

#endif
