/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 00:04:16 by tduprez           #+#    #+#             */
/*   Updated: 2023/10/26 14:07:03 by tduprez          ###   ########lyon.fr   */
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
			}
			catch (std::range_error& e)
			{
				std::cout << e.what() << std::endl;
			}
		}
		std::cout << "------------------------------------" << std::endl;
		span.printVector();
		std::cout << "------------------------------------" << std::endl;
	}
	{
		Span	span(100);

		try
		{
			span.addNumbersByRange(15, 115);
		}
		catch(const std::out_of_range& e)
		{
			std::cout << e.what() << std::endl;
		}
		span.printVector();
		std::cout << "------------------------------------" << std::endl;
	}
	{
		Span sp = Span(5) ;
		sp.addNumber(6) ;
		sp.addNumber(3) ;
		sp.addNumber(17) ;
		sp.addNumber(9) ;
		sp.addNumber(11) ;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return 0;
}
