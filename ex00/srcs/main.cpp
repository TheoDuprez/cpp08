/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 00:04:16 by tduprez           #+#    #+#             */
/*   Updated: 2024/01/08 13:28:24 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"
#include <vector>
#include <list>

int	main(void)
{
	std::list<int> lst;
	std::vector<char> vec;

	for (int i = 0; i < 100; i++)
	{
		lst.push_back(i);
		vec.push_back(i + 10);
	}
	std::cout << easyfind(lst, 9) << std::endl;
	std::cout << easyfind(vec, 55) << std::endl;
	try
	{
		std::cout << easyfind(vec, 700) << std::endl;
	}
	catch (const noOccurenceFound& e)
	{
		std::cout << e.what() << std::endl;
	}
}
