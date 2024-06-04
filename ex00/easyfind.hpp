#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stack>
#include <queue>

// std::find behavior

//template <typename T>
//typename T::iterator find(typename T::iterator first, typename T::iterator last, const T& val)
//{
//	while (first != last)
//	{
//		if (*first == val)
//			return first;
//		++first;
//	}
//	return last;
//}

//template <typename T>
//void easyfind(T &container, int second)
//{
//	typename T::iterator it = std::find(container.begin(), container.end(), second);
//	if (it  == container.end())
//		throw std::exception();
//	return it;
//}

template <typename T>
void easyfind(T container, int second)
{
	typename T::iterator it = std::find(container.begin(), container.end(), second);
	if (it  == container.end())
		throw std::exception();
	std::cout << second << " is found in Sequence Container!" << std::endl;
	return ;
}

void easyfind(std::stack<int> container, int second)
{
	while (!container.empty())
	{
		if (container.top() == second)
		{
			std::cout << second << " is found in Stack!" << std::endl;
			return ;
		}
		container.pop();
	}
	throw std::exception();
}

void easyfind(std::queue<int> container, int second)
{
	while (!container.empty())
	{
		if (container.front() == second)
		{
			std::cout << second << " is found in Queue!" << std::endl;
			return ;
		}
		container.pop();
	}
	throw std::exception();
}


#endif