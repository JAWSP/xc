/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:16:22 by mac               #+#    #+#             */
/*   Updated: 2021/09/03 12:06:10 by juhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <random>
# include <exception>

class Span
{
private:
	std::vector<int> arr;
	static int indx;
	unsigned int shortest;
public:
	Span() {};
	Span(unsigned int N);
	~Span() {};
	Span(const Span &S);
	Span &operator =(const Span &S);
	void addNumber(int num);
	void addNumber(unsigned int be, unsigned int nd);
	unsigned int shortestSpan(void);
	unsigned int longestSpan(void);
};

#endif
