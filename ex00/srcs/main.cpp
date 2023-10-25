/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 00:04:16 by tduprez           #+#    #+#             */
/*   Updated: 2023/10/25 12:53:32 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int	main(void)
{
	std::list<int> lst;
	std::vector<char> vec;

	for (int i = 0; i < 100; i++)
	{
		lst.push_back(i);
		vec.push_back((i + 48));
	}
	easyfind(lst, 9);
	easyfind(vec, '7');
	try
	{
		easyfind(vec, 700);
	}
	catch (const noOccurenceFound& e)
	{
		std::cout << e.what() << std::endl;
	}
}
