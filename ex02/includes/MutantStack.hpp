/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:52:21 by tduprez           #+#    #+#             */
/*   Updated: 2024/01/08 19:22:17 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
private:

public:
	typedef typename std::stack<T>::container_type::iterator iter;
	MutantStack(void);
	MutantStack(const MutantStack& obj);
	MutantStack& operator=(const MutantStack& obj);
	~MutantStack(void);

	iter begin()
	{
		return this->c.begin();
	}
	iter end()
	{
		return this->c.end();
	}
};

template<typename T>
MutantStack<T>::MutantStack(void)
{
	return ;
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& obj)
{
	if (*this != obj)
		*this = obj;
	return ;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& obj)
{
	static_cast<void>(obj);
	return *this;
}

template<typename T>
MutantStack<T>::~MutantStack(void)
{
	return ;
}

#endif
