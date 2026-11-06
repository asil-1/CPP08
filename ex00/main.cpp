/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 09:12:25 by ldepenne          #+#    #+#             */
/*   Updated: 2026/11/06 18:14:46 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

void	testVector() {
	std::vector<int>	v;

	v.push_back(14);
	v.push_back(42);
	v.push_back(9);
	v.push_back(-1);
	v.push_back(42);
	v.push_back(-45);

	std::cout << "print vector content:" << std::endl;
	for (size_t i = 0; i != v.size(); i++)
		std::cout << v[i] << std::endl;
	try {
		std::vector<int>::iterator	it = easyfind(v, 42);
		std::cout << "Find: " << *it << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void	testList() {
	std::list<char>	lst;

	lst.push_back('s');
	lst.push_front('i');
	lst.push_front('L');
	lst.push_back('a');

	std::cout << "print list content:" << std::endl;
	std::list<char>::iterator	it = lst.begin();
	for (; it != lst.end(); it++)
		std::cout << *it;
	std::cout << std::endl;
	try {
		it = easyfind(lst, 'i');
		std::cout << "Find: " << *it << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

int	main(void)
{
	testVector();
	std::cout << std::endl;
	testList();
}
