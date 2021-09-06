/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 09:32:48 by mac               #+#    #+#             */
/*   Updated: 2021/08/31 10:25:07 by juhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "----- 이번엔 리스트랑 비교해봄 -----" << std::endl;

	std::list<int> li;
	li.push_back(5);
	li.push_back(17);

	std::cout << li.back() << std::endl;

	li.pop_back();

	std::cout << li.size() << std::endl;

	li.push_back(3);
	li.push_back(5);
	li.push_back(737);
	//[...]
	li.push_back(0);

	std::list<int>::iterator lit = li.begin();
	std::list<int>::iterator lite = li.end();

	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}

	std::cout << "----- 이번엔 백터랑 비교해봄 -----" << std::endl;

	std::vector<int> vec;
	vec.push_back(5);
	vec.push_back(17);

	std::cout << vec.back() << std::endl;

	vec.pop_back();

	std::cout << vec.size() << std::endl;

	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(737);
	//[...]
	vec.push_back(0);

	std::vector<int>::iterator vit = vec.begin();
	std::vector<int>::iterator vite = vec.end();

	++vit;
	--vit;
	while (vit != vite)
	{
		std::cout << *vit << std::endl;
		++vit;
	}
	return 0;
}
