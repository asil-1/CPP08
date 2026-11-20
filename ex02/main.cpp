/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 16:53:17 by ldepenne          #+#    #+#             */
/*   Updated: 2026/11/20 17:46:12 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

MutantStack<int>	mstackGen(int len)
{
	MutantStack<int>	mstack;
	int					randNum;
	for (int i = 0; i < len; i++)
	{
		randNum = std::rand() % 100;
		mstack.push(randNum);
	}
	return mstack;
}

int	main()
{
	std::srand(std::time(NULL));

	MutantStack<int>	mstack;
	mstack = mstackGen(10);

	MutantStack<int>::iterator	it = mstack.begin();
	std::cout << "Print mstack, use it begin()" << std::endl;
	for(; it != mstack.end(); it++)
		std::cout << COLOR << *it << " " << NC;
	std::cout << std::endl;
	MutantStack<int>::reverse_iterator	rit = mstack.rbegin();
	std::cout << "Use it rbegin()" << std::endl;
	for(; rit != mstack.rend(); rit++)
		std::cout << COLOR << *rit << " " << NC;
	std::cout << std::endl;

	std::cout << std::endl << "Test other stack methodes" << std::endl;
	std::cout << "empty: " << COLOR << (mstack.empty() ? "true" : "false") << NC << std::endl;
	std::cout << "top: " << COLOR << mstack.top() << NC;
	std::cout << " size: " << COLOR << mstack.size() << NC << std::endl;
	int	rNum = std::rand() % 100;
	std::cout << "push: " << COLOR << rNum << NC;
	mstack.push(rNum);
	std::cout << " top -> " << COLOR << mstack.top() << NC
	<< " size -> " << COLOR << mstack.size() << NC << std::endl;
	mstack.pop();
	std::cout << "pop: " << " top -> " << COLOR << mstack.top() << NC
	<< " size -> " << COLOR << mstack.size() << NC << std::endl;
}
