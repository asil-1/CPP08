/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:38:08 by ldepenne          #+#    #+#             */
/*   Updated: 2026/11/18 23:59:30 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>

int	main(int ac, char **av)
{
	Span	vec(ac - 1);

	try {
		for (int i = 1; i < ac; i++) {
			vec.addNumber(atoi(av[i]));
		}
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "shortest: ";
	try {
		std::cout << vec.shortestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "longtest: ";
	try {
		std::cout << vec.longtestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

/* @test : tests implemented manually
	-array empty
	-array {1} only one number
	-array {4, 4, 4, 4} same number
	-array {-1, 12, 3, 0}
	-array {-24, -56, -100, INT_MIN}

	@test : bash cmd -> too long
	seq -20000 200000 | shuf -n 1000000 | paste -sd ' '
*/

// int	main(void)
// {
// 	Span	vec(4);

// 	/*comment for empty*/
// 	try {
// 		vec.addNumber(-1);
// 		vec.addNumber(12);
// 		vec.addNumber(3);
// 		vec.addNumber(0);
// 	} catch (std::exception &e) {
// 		std::cerr << e.what() << std::endl;
// 	}

// 	try {
// 		std::cout << "shortestSpan: "
// 		<< vec.shortestSpan() << std::endl;
// 	} catch (std::exception &e) {
// 		std::cerr << e.what() << std::endl;
// 	}
// 	try {
// 		std::cout << "longtestSpan: "
// 		<< vec.longtestSpan() << std::endl;
// 	} catch (std::exception &e) {
// 		std::cerr << e.what() << std::endl;
// 	}
// }
