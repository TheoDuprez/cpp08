/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 00:04:16 by tduprez           #+#    #+#             */
/*   Updated: 2023/10/25 15:13:46 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int	main(void)
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
	return 0;
}
