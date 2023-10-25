/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:37:14 by tduprez           #+#    #+#             */
/*   Updated: 2023/10/25 15:09:23 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_data;
		Span(void);

	public:
		Span(unsigned int N);
		Span(const Span& obj);
		Span& operator=(const Span& obj);
		~Span(void);

		void	addNumber(int n);
};

Span::Span(void)
{
	return ;
}

Span::Span(unsigned int N): _N(N)
{
	return ;
}

Span::Span(const Span& obj)
{
	if (this != &obj)
		*this = obj;
	return ;
}

Span& Span::operator=(const Span& obj)
{
	this->_N = obj._N;
	return *this;
}

Span::~Span(void)
{
	return ;
}

void	Span::addNumber(int n)
{
	if (this->_data.size() == this->_N)
		throw  std::range_error("Cannot add number : Span is full !");
	this->_data.push_back(n);
	return ;
}
