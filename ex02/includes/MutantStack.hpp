/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:52:21 by tduprez           #+#    #+#             */
/*   Updated: 2023/11/02 16:43:34 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
# define MutantStack_HPP

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
private:
	/* data */
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack(void);
	MutantStack(const MutantStack& obj);
	~MutantStack(void);

	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
};

template<typename T>
MutantStack<T>::MutantStack(void): std::stack<T>()
{
	return ;
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& obj): std::stack<T>()
{
	if (*this != obj)
		*this = obj;
	return ;
}

template<typename T>
MutantStack<T>::~MutantStack(void)
{
	return ;
}


#endif
