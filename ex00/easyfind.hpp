/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 09:14:11 by ldepenne          #+#    #+#             */
/*   Updated: 2026/11/06 18:15:12 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class	NotFound : public std::exception {
	public:
		const char* what() const throw();
};

template <typename T>
typename T::iterator	easyfind(T& containt, int value);

# include "easyfind.tpp"

#endif
