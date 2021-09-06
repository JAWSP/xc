/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:48:27 by mac               #+#    #+#             */
/*   Updated: 2021/09/06 18:19:55 by juhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int Span::indx = 0;

Span::Span(unsigned int N)
{
	arr.resize(N);
	shortest = 0;
}

Span::Span(const Span &S)
{
	this->arr = S.arr;
	this->Span::indx = S.Span::indx;
	this->shortest = S.shortest;
}

Span &Span::operator =(const Span &S)
{
	if (this != &S)
	{
		this->arr = S.arr;
		this->Span::indx = S.Span::indx;
		this->shortest = S.shortest;
	}
	return (*this);
}

void Span::addNumber(int num)
{
	if (find(arr.begin(), arr.end(), num) != arr.end() || Span::indx == (int)arr.capacity())
		throw (std::exception());
//	std::cout << "before : " << arr.capacity() << std::endl;
	arr[Span::indx] = num;
	std::cout << Span::indx << " : " << arr[Span::indx] << std::endl;
	Span::indx++;
//	std::cout << "after : " << arr.capacity() << std::endl;
}

void Span::addNumber(unsigned int be, unsigned int nd)
{

	std::vector<int>::iterator start = arr.begin();
	std::vector<int>::iterator fin = arr.begin();
//	std::vector<int>::iterator fin = arr.end();
	start += be;
	fin += nd;
	if (be > nd && nd >= (unsigned int)arr.capacity())
		throw (std::exception());
	for (int i = 0; start != fin; start++)
	{
//		if (start == arr.end())
//			break ;
		int ran = (rand() % 10000000);
		if (find(arr.begin(), arr.end(), ran) != arr.end()) //0도 정수니깐 냅두자
		{
			start--;
			continue ;
		}
		arr[(int)be + i] = ran;
//		if (i >= 9990)
//			std::cout << i << " val : " << arr[be + i] << std::endl;
		i++;
	}
	Span::indx = (int)nd + 1;
}
//방법
//1. set컨테이너 쓰기->그러기엔 벡터를 너무 많이씀, 바꾸기 귀찮, set에 대한 개념부족
//2. sort시켜서 구하기 ->이게 젤 현실적인듯
unsigned int Span::shortestSpan(void)
{
	if (Span::indx < 2) // = if (arr.size() < 2) 인줄 싶었지만 resize한것부턴 그것대로
		throw (std::exception());
	std::vector<int> tmp;
	tmp.resize((unsigned int)Span::indx - 1);
	std::cout << "copa : " << arr.capacity() << " size : " << tmp.size() << std::endl;
	std::copy(arr.begin(), arr.begin() + Span::indx - 1, tmp.begin());
	sort(tmp.begin(), tmp.end());
	shortest = tmp[0] - tmp[1]; //0이 가끔씩 나오는데 그건 기존보다 1 더 많게 할당을 해버려서 resize에서 디폴트 값인 0이 나오게 된다
//	for (std::vector<int>::iterator it = tmp.begin(); it + 1 < tmp.end(); it++)
//	{
//		std::cout << *it << std::endl;
//	}
//	std::cout << "------------" << std::endl;
//	int i = 0;
//	for (std::vector<int>::iterator it = arr.begin(); it < arr.end(); it++)
//	{
//		std::cout << *it << std::endl;
//		std::cout << "i : " << i << std::endl;
//		i++;
//	}
	for (std::vector<int>::iterator it = tmp.begin(); it + 1 < tmp.end(); it++)
	{
		if ((unsigned int)(*(it + 1) - *it) < shortest)
		{
			shortest = *(it + 1) - *it;
			if (shortest == 1) //킹론상 0은 같은거 아님 안나옴, 근데 같은경우는 없음 그럼 1이지
				break ;
		}
	}
	return (shortest);
}
//제일 큰놈 - 제일작은놈 = 차가 젤 큰거
unsigned int Span::longestSpan(void)
{
	if (Span::indx < 2)
		throw (std::exception());
	int max;
	max = *max_element(arr.begin(), arr.end());//알고리즘에 최대 최소값 구하는 친구가 있다
	int min;
	min = *min_element(arr.begin(), arr.end());
	return (max - min);
}
