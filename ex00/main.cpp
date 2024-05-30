#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
	std::vector<int> container;

	container.push_back(1);
	container.push_back(2);
	container.push_back(3);
	container.push_back(4);

	::easyfind(container, 3);

	//std::vector<int>::iterator it = std::find(container.begin(), container.end(), 14);

	//std::cout << *it << std::endl;


}