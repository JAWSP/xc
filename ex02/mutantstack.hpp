/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhpark <juhpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 16:49:45 by juhpark           #+#    #+#             */
/*   Updated: 2021/08/31 11:09:11 by juhpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <vector>

template<typename T, class Container = std::deque<T> >//띄워주세요
class MutantStack : public std::stack<T, Container> //클래스 템플릿을 상속할떈 이렇게
{
public:
	typedef typename std::stack<T, Container>::container_type::iterator iterator; 
	//container_type라고 쓴 이유는 레퍼런스를 보니 두번째인자를 저렇게 명칭한다, using을 못쓰니 typedef를 쓴다
	//글고 typename은 이놈이 템플릿 인자라는것을 확정시키기 위해 저리씀
	typedef typename std::stack<T, Container> mstack; //좀 보기 편하라고

	MutantStack()
	{
		mstack();
	}
	MutantStack(const MutantStack &M)
	{
		this = mstack(M);
	}
	MutantStack &operator =(const MutantStack &M)
	{
		if (*this != &M)
			mstack::operator =(M);
		return (*this);
	}
	~MutantStack() {};
	iterator begin(void)
	{
		return (mstack::c.begin());
	}
	iterator end(void)
	{
		return (mstack::c.end());
	}
	//iterator는 stack안에 있는 deque에 있기때문에 스택 내에 선언된 deque객체c를 불러와서 쓴다. 
};

#endif
