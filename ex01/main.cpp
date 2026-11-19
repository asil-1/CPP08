/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:38:08 by ldepenne          #+#    #+#             */
/*   Updated: 2026/11/19 00:17:05 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>

// int	main(int ac, char **av)
// {
// 	Span	vec(ac - 1);

// 	try {
// 		for (int i = 1; i < ac; i++) {
// 			vec.addNumber(atoi(av[i]));
// 		}
// 	} catch (std::exception &e) {
// 		std::cout << e.what() << std::endl;
// 	}
// 	std::cout << "shortest: ";
// 	try {
// 		std::cout << vec.shortestSpan() << std::endl;
// 	} catch (std::exception &e) {
// 		std::cerr << e.what() << std::endl;
// 	}
// 	std::cout << "longtest: ";
// 	try {
// 		std::cout << vec.longtestSpan() << std::endl;
// 	} catch (std::exception &e) {
// 		std::cerr << e.what() << std::endl;
// 	}
// }

/* @test : tests implemented manually
	-array empty
	-array {1} only one number
	-array {4, 4, 4, 4} same number
	-array {-1, 12, 3, 0}
	-array {-24, -56, -100, INT_MIN}

	@test : bash cmd -> too long
	seq -20000 200000 | shuf -n 1000000 | paste -sd ' '
*/

int	main(void)
{
	Span	sp = Span(17);

	/*comment for empty*/
	// try {
	// 	sp.addNumber(6);
	// 	sp.addNumber(3);
	// 	sp.addNumber(17);
	// 	sp.addNumber(9);
	// 	sp.addNumber(11);
	// } catch (std::exception &e) {
	// 	std::cerr << e.what() << std::endl;
	// }
	try {
		sp.addNumber(0, 16);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::cout << "shortestSpan: "
		<< sp.shortestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "longtestSpan: "
		<< sp.longtestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
