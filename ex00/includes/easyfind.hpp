/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:37:14 by tduprez           #+#    #+#             */
/*   Updated: 2023/10/25 12:53:19 by tduprez          ###   ########lyon.fr   */
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
	(void)start;

	for (; start != end; start++)
	{
		if (*start == toFind)
		{
			std::cout << "Occurence to found is : " << *start << std::endl;
			isFound = true;
		}
	}
	if (isFound == false)
		throw noOccurenceFound();
	return 0;
}
