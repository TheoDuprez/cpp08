/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:57:54 by tduprez           #+#    #+#             */
/*   Updated: 2023/10/25 00:12:44 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	displayInt(int i)
{
	std::cout << i << std::endl;
}

template<typename T>
int	easyfind(const T& container, int toFind)
{
	for_each(container.begin(), container.end(), displayInt);
}
