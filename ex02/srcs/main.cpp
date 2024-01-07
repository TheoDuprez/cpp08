/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:52:04 by tduprez           #+#    #+#             */
/*   Updated: 2024/01/07 17:39:41 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque
#include <list>          // std::deque

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
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
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
		MutantStack<std::string>::iterator start = mstack2.begin();
		MutantStack<std::string>::iterator end = mstack2.end();
		for (; start != end; start++)
			std::cout << *start;
		std::cout << std::endl;
	}
return 0;
}
