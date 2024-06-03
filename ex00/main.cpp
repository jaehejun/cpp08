#include "easyfind.hpp"
// Sequence Containers 순차 컨테이너
#include <vector>
#include <list>
#include <deque>
// Container Adapters 컨테이너 어댑터
#include <stack>
#include <queue>
// Associative Containers 연관 컨테이너
#include <set>
#include <map>
#include <iostream>

int main()
{
	std::vector<int> vectorContainer;


	vectorContainer.push_back(1);
	vectorContainer.push_back(2);
	vectorContainer.push_back(3);
	//vectorContainer.push_back(4);

	std::vector<int>::iterator first = vectorContainer.begin();
	std::vector<int>::iterator last = vectorContainer.end();
	std::vector<int>::iterator it = find(first, last, 3);
	std::cout << *it << std::endl;


	//std::vector<int>::iterator it = vectorContainer.begin();
	//std::vector<int>::iterator it2 = vectorContainer.end();
	//std::cout << "BEGIN ADD: " << &it << std::endl;
	//std::cout << "BEGIN VAL: " << *it << std::endl;
	//std::cout << "END ADD: " << &it2 << std::endl;
	//std::cout << "END VAL: " << *it2 << std::endl;
	////it++;
	////std::cout << &it << std::endl;
	////std::cout << *it << std::endl;
	////it++;
	////std::cout << &it << std::endl;
	////std::cout << *it << std::endl;
	//std::cout << "Vector[0]: " << vectorContainer[0] << std::endl;
	//std::cout << "BEGIN VAL: " << *vectorContainer.begin() << std::endl;
	//std::cout << "END VAL: " << *vectorContainer.end() << std::endl;
	//try
	//{
	//	std::vector<int>::iterator it = easyfind(vectorContainer, 1);
	//	std::cout << *it << std::endl;
	//	it = easyfind(vectorContainer, 2);
	//	std::cout << *it << std::endl;
	//	it = easyfind(vectorContainer, 3);
	//	std::cout << *it << std::endl;
	//	it = easyfind(vectorContainer, 4);
	//	std::cout << *it << std::endl;
	//	it = easyfind(vectorContainer, 5);
	//	std::cout << *it << std::endl;
	//}
	//catch(const std::exception& e)
	//{
	//	std::cout << e.what() << std::endl;
	//}

	//std::list<int> intContainer;

	//intContainer.push_back(1);
	//intContainer.push_back(2);
	//intContainer.push_back(3);
	//intContainer.push_back(4);
	
	//try
	//{
	//	std::list<int>::iterator it = easyfind(intContainer, 1);
	//	std::cout << *it << std::endl;
	//	it = easyfind(intContainer, 2);
	//	std::cout << *it << std::endl;
	//	it = easyfind(intContainer, 3);
	//	std::cout << *it << std::endl;
	//	it = easyfind(intContainer, 4);
	//	std::cout << *it << std::endl;
	//	it = easyfind(intContainer, 5);
	//	std::cout << *it << std::endl;
	//}
	//catch(const std::exception& e)
	//{
	//	std::cout << e.what() << std::endl;
	//}
	//std::deque<int> dequeContainer;

	//dequeContainer.push_back(1);
	//dequeContainer.push_back(2);
	//dequeContainer.push_back(3);
	//dequeContainer.push_back(4);

	//try
	//{
	//	std::deque<int>::iterator it = easyfind(dequeContainer, 1);
	//	std::cout << *it << std::endl;
	//	it = easyfind(dequeContainer, 2);
	//	std::cout << *it << std::endl;
	//	it = easyfind(dequeContainer, 3);
	//	std::cout << *it << std::endl;
	//	it = easyfind(dequeContainer, 4);
	//	std::cout << *it << std::endl;
	//	it = easyfind(dequeContainer, 5);
	//	std::cout << *it << std::endl;
	//}
	//catch(const std::exception& e)
	//{
	//	std::cout << e.what() << std::endl;
	//}


//@@@@@@@@@@@@@@@@
//	std::stack<int> stackContainer;

//	stackContainer.push(1);
//	stackContainer.push(2);
//	stackContainer.push(3);
//	stackContainer.push(4);
	
//	try
//	{
//		std::stack<int>::iterator it = easyfind(stackContainer, 1);
//		std::cout << *it << std::endl;
//		it = easyfind(stackContainer, 2);
//		std::cout << *it << std::endl;
//		it = easyfind(stackContainer, 3);
//		std::cout << *it << std::endl;
//		it = easyfind(stackContainer, 4);
//		std::cout << *it << std::endl;
//		it = easyfind(stackContainer, 5);
//		std::cout << *it << std::endl;
//	}
//	catch(const std::exception& e)
//	{
//		std::cout << e.what() << std::endl;
//	}


//	std::queue<int> queueContainer;

//	queueContainer.push(1);
//	queueContainer.push(2);
//	queueContainer.push(3);
//	queueContainer.push(4);

//	try
//	{
//		std::queue<int>::iterator it = easyfind(queueContainer, 1);
//		std::cout << *it << std::endl;
//		it = easyfind(queueContainer, 2);
//		std::cout << *it << std::endl;
//		it = easyfind(queueContainer, 3);
//		std::cout << *it << std::endl;
//		it = easyfind(queueContainer, 4);
//		std::cout << *it << std::endl;
//		it = easyfind(queueContainer, 5);
//		std::cout << *it << std::endl;
//	}
//	catch(const std::exception& e)
//	{
//		std::cout << e.what() << std::endl;
//	}
}