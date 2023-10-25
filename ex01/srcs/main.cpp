/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 00:04:16 by tduprez           #+#    #+#             */
/*   Updated: 2023/10/25 22:12:59 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int	main(void)
{
	{
		Span	span(10);
		for (int i = 0; i < 15; i++)
		{
			try
			{
				span.addNumber(i);
				std::cout << span._data[i] << " --- " << i << std::endl;
			}
			catch (std::range_error& e)
			{
				std::cout << e.what() << std::endl;
			}
		}
		std::cout << span._data.size() << std::endl;
		for (int i = 0; i < 10; i++)
			std::cout << span._data[i] << std::endl;
	}

	{
		Span	span(100);
		std::vector<int> base;

		try
		{
			span.addNumbersByRange(0, 1000);
		}
		catch(const std::out_of_range& e)
		{
			std::cout << e.what() << std::endl;
		}
		

		// for (int i = 0; i < 1200; i++)
		// 	std::cout << span._data[i] << std::endl;
	}

	
	return 0;
}
