/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 00:04:16 by tduprez           #+#    #+#             */
/*   Updated: 2023/10/25 00:38:09 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

class noOccurenceFound : public std::exception
{
	public:
		const char* what() const throw()
		{
			return "No occurence found...";
		}
};

void	displayInt(int i)
{
	std::cout << i << std::endl;
}

template<typename T>
int	easyfind(const T& container, int toFind)
{
	typename T::const_iterator	start = container.begin();
	typename T::const_iterator	end = container.end();
	bool						isFound = false;

	for (start; start != end; start++)
	{
		if (*start == toFind)
		{
			std::cout << "Number to found is : " << *start << std::endl;
			isFound = true;
		}
	}
	if (isFound == false)
		throw noOccurenceFound();
	return 0;
}

int	main(void)
{
	std::list<int> vec;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(7);
	vec.push_back(8);
	vec.push_back(9);

	easyfind(vec, 7);
	try
	{
		easyfind(vec, 70);
	}
	catch (const noOccurenceFound& e)
	{
		std::cout << e.what() << std::endl;
	}
}
