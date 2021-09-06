/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 09:53:30 by mac               #+#    #+#             */
/*   Updated: 2021/09/03 15:39:47 by juhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <exception>


int main()
{
	std::vector<int> vi(5);
	std::list<int> lis;
	for (int i = 0; i < 5; i++)
		vi[i] = i;
	for (int i = 0; i < 5; i++)
		lis.push_back(i);
	try
	{
		std::cout << easyfind(vi, 2) << std::endl;
		std::cout << easyfind(lis, 2) << std::endl;
		std::cout << easyfind(vi, 4) << std::endl;
		std::cout << easyfind(lis, 4) << std::endl;
		std::cout << easyfind(vi, 3) << std::endl;
		std::cout << easyfind(lis, 6) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "fail!" << std::endl;
		return (1);
	}
	return (0);
}
