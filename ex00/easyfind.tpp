/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 09:23:14 by ldepenne          #+#    #+#             */
/*   Updated: 2026/11/06 17:50:45 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

template <typename T>
typename T::iterator	easyfind(T& container, int value)
{
	typename T::iterator	it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw NotFound();
	return it;
}

const char*	NotFound::what() const throw() {
	return "No result were found";
}

#endif
