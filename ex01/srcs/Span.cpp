/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:21:24 by tduprez           #+#    #+#             */
/*   Updated: 2024/01/08 13:37:07 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span(void): _N(0), _posInVector(0)
{
	return ;
}

Span::Span(unsigned int N): _N(N), _posInVector(0)
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
	if (this != &obj)
	{
		this->_N = obj._N;
		this->_posInVector = obj._posInVector;
		this->_data = obj._data;
	}
	return *this;
}

Span::~Span(void)
{
	return ;
}

void	Span::addNumber(int n)
{
	if (this->_posInVector == this->_N)
		throw std::range_error("Cannot add number : Span is full !");
	this->_data.push_back(n);
	this->_posInVector++;
	return ;
}

int	Span::shortestSpan(void)
{
	std::vector<int>			sortArray = this->_data;
	std::sort(sortArray.begin(), sortArray.end());
	std::vector<int>::iterator	begin = sortArray.begin();
	std::vector<int>::iterator	begin_next = sortArray.begin() + 1;
	int							ret = *begin_next - *begin;

	for (; begin_next != sortArray.end(); begin_next++)
	{
		if (*begin_next - *begin < ret)
			ret = *begin_next - *begin;
		begin++;
	}
	return ret;
}

int	Span::longestSpan(void)
{
	std::vector<int>	sortArray = this->_data;

	std::sort(sortArray.begin(), sortArray.end());
	return *(sortArray.end() - 1) - *sortArray.begin();
}

void	Span::addNumbersByRange(unsigned int start, unsigned int end)
{
	std::vector<unsigned int>			vec;
	std::vector<unsigned int>::iterator	begin;

	if ((end - start) + this->_posInVector > this->_N)
		throw std::out_of_range("Range error: range too big");
	for (; start < end; start++)
		vec.push_back(start);
	begin = vec.begin();
	for (; begin != vec.end(); begin++)
		this->_data.push_back(*begin);
	return ;
}

void	Span::printVector(void)
{
	for (std::vector<int>::iterator begin = this->_data.begin(); begin != this->_data.end(); begin++)
		std::cout << *begin << std::endl;
	return ;
}
