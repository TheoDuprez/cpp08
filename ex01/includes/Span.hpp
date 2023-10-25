/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:37:14 by tduprez           #+#    #+#             */
/*   Updated: 2023/10/25 23:29:16 by tduprez          ###   ########lyon.fr   */
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
		unsigned int		_assignedElements;
		Span(void);

	public:
		std::vector<int>	_data;
		Span(unsigned int N);
		Span(const Span& obj);
		Span& operator=(const Span& obj);
		~Span(void);

		void	addNumber(int n);
		void	addNumbersByRange(unsigned int start, unsigned int end);

};

Span::Span(void): _N(0), _assignedElements(0)
{
	this->_data.resize(this->_N);
	return ;
}

Span::Span(unsigned int N): _N(N), _assignedElements(0)
{
	this->_data.resize(this->_N);
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
	if (this->_assignedElements == this->_N)
		throw  std::range_error("Cannot add number : Span is full !");
	this->_data.insert(this->_data[i], n);
	this->_assignedElements++;
	return ;
}

void	Span::addNumbersByRange(unsigned int start, unsigned int end)
{
	unsigned int				sizeOfTab = end - start;
	std::vector<unsigned int>	vec;
	unsigned int				i;

	if (end - start > this->_N)
		throw std::out_of_range("Range error: range too big");
	for (i = 0; i < sizeOfTab; i++)
	{
		vec.push_back(start++);
		this->_assignedElements++;
	}
	i = 0;
	for (std::vector<unsigned int>::iterator begin = vec.begin(); begin != vec.end(); begin++)
	{
		this->_data.assign(begin, vec.end());
		// this->_data[i] = *begin;
		std::cout << this->_data[i] << std::endl;
		i++;
	}
	return ;
}
