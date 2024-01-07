/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:37:14 by tduprez           #+#    #+#             */
/*   Updated: 2024/01/07 17:41:03 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class noOccurenceFound : public std::exception
{
	public:
		const char* what() const throw()
		{
			return "No occurence found !";
		}
};

template <typename T>
int	easyfind(const T& container, int toFind)
{
	if (std::find(container.begin(), container.end(), toFind) == container.end())
		throw noOccurenceFound();
	return (toFind);
}

#endif
