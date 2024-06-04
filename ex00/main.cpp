#include "easyfind.hpp"
#include <iostream>

// Sequence Containers 순차 컨테이너
#include <vector>
#include <list>
#include <deque>
// Container Adapters 컨테이너 어댑터
#include <stack>
#include <queue>
// Associative Containers 연관 컨테이너
//#include <set>
//#include <map>

int main()
{
	// Sequence Conatainers - Vector
	std::cout << "@@@@@@@@@@Vector@@@@@@@@@@" << std::endl;
	std::vector<int> vectorContainer;

	vectorContainer.push_back(1);
	vectorContainer.push_back(2);

	try
	{
		easyfind(vectorContainer, 1);
		easyfind(vectorContainer, 2);
		easyfind(vectorContainer, 3);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	// Sequence Conatainers - List
	std::cout << "@@@@@@@@@@List@@@@@@@@@@" << std::endl;
	std::list<int> listContainer;

	listContainer.push_back(1);
	listContainer.push_back(2);
	try
	{
		easyfind(listContainer, 1);
		easyfind(listContainer, 2);
		easyfind(listContainer, 3);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	// Sequence Conatainers - Deque
	std::cout << "@@@@@@@@@@Deque@@@@@@@@@@" << std::endl;
	std::deque<int> dequeContainer;

	dequeContainer.push_back(1);
	dequeContainer.push_back(2);
	try
	{
		easyfind(dequeContainer, 1);
		easyfind(dequeContainer, 2);
		easyfind(dequeContainer, 3);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

// Container Adapters - Stack
	std::cout << "@@@@@@@@@@Stack@@@@@@@@@@" << std::endl;
	std::stack<int> stackContainer;

	stackContainer.push(1);
	stackContainer.push(2);
	try
	{
		easyfind(stackContainer, 1);
		easyfind(stackContainer, 2);
		easyfind(stackContainer, 3);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

//// Container Adapters - Queue
	std::cout << "@@@@@@@@@@Queue@@@@@@@@@@" << std::endl;
	std::queue<int> queueContainer;

	queueContainer.push(1);
	queueContainer.push(2);
	try
	{
		easyfind(queueContainer, 1);
		easyfind(queueContainer, 2);
		easyfind(queueContainer, 3);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}