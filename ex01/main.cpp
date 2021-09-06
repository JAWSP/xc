/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:16:04 by mac               #+#    #+#             */
/*   Updated: 2021/09/06 17:12:33 by juhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	srand((unsigned int)time(NULL));
	Span sp = Span(5);
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "failed!" << std::endl;
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "-------------10000-----------" << std::endl;
	Span ss = Span(10000);
	try
	{
		ss.addNumber(0, 300);
		std::cout << ss.shortestSpan() << std::endl;
		std::cout << ss.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Failed!" << std::endl;
	}
	
	return (0);
}
