/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 23:36:27 by ldepenne          #+#    #+#             */
/*   Updated: 2026/11/20 17:14:07 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

# define COLOR "\033[1;38;5;70m"
# define NC "\033[0m"

template <class T>
class	MutantStack : public std::stack<T> {
	public:
		MutantStack() {};
		MutantStack(const std::stack<T> &src) {*this = src;}
        MutantStack &operator =(const std::stack<T> &rhs)
        {
            this->std::stack<T>::operator=(rhs);
            return (*this);
        }
		MutantStack(const MutantStack& other) { *this = other; };
		MutantStack &operator=(const MutantStack& other) { this->std::stack<T>::operator=(std::stack<T>(other.c)); return *this; };
		~MutantStack() {};

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		iterator		begin() { return this->c.begin(); };
		const_iterator	cbegin() const { return this->c.cbegin(); };
		iterator		end() { return this->c.end(); };
		const_iterator	cend() const { return this->c.cend(); };
		reverse_iterator	rbegin() { return this->c.rbegin(); };
		const_reverse_iterator	crbegin() const { return this->c.crbegin(); };
		reverse_iterator	rend() { return this->c.rend(); };
		const_reverse_iterator	crend() const { return this->c.crend(); };
};

#endif
