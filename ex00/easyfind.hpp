#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

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

template <typename T>
typename T::iterator easyfind(T &container, int second)
{
	typename T::iterator it = std::find(container.begin(), container.end(), second);
	if (it  == container.end())
		throw std::exception();
	return it;
}


#endif