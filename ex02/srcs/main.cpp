/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:52:04 by tduprez           #+#    #+#             */
/*   Updated: 2024/01/08 19:23:05 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

#include <iostream>
#include <stack>
#include <vector>
#include <deque>
#include <list>

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::container_type::iterator it = mstack.begin();
		MutantStack<int>::container_type::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	{
		MutantStack<std::string> mstack;
		MutantStack<std::string> mstack2 = mstack;

		mstack2.push("Ceci ");
		mstack2.push("est ");
		mstack2.push("un ");
		mstack2.push("test ");
		mstack2.push("!");
		mstack2.push("!");
		mstack2.pop();
		MutantStack<std::string>::container_type::iterator start = mstack2.begin();
		MutantStack<std::string>::container_type::iterator end = mstack2.end();
		for (; start != end; start++)
			std::cout << *start;
		std::cout << std::endl;

		start = mstack2.begin();
		for (end--; end != start; end--)
			std::cout << *end;
		std::cout << *end << std::endl;
	}
	return 0;
}
