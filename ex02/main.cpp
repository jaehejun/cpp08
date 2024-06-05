#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <vector>

//int main()
//{
//	MutantStack<int> mstack;
//	mstack.push(5);
//	mstack.push(17);
//	std::cout << mstack.top() << std::endl;
//	mstack.pop();
//	std::cout << mstack.size() << std::endl;
//	mstack.push(3);
//	mstack.push(5);
//	mstack.push(737);
//	//[...]
//	mstack.push(0);
//	MutantStack<int>::iterator it = mstack.begin();
//	MutantStack<int>::iterator ite = mstack.end();
//	++it;
//	--it;
//	while (it != ite)
//	{
//	std::cout << *it << std::endl;
//	++it;
//	}
//	std::stack<int> s(mstack);
//	return 0;
//}


////@@@@@@@@@@@@@@@@list@@@@@@@@@@@@@
//int main()
//{
//	std::list<int> mstack;
//	mstack.push_back(5);
//	mstack.push_back(17);
//	std::cout << mstack.back() << std::endl;
//	mstack.pop_back();
//	std::cout << mstack.size() << std::endl;
//	mstack.push_back(3);
//	mstack.push_back(5);
//	mstack.push_back(737);
//	//[...]
//	mstack.push_back(0);
//	std::list<int>::iterator it = mstack.begin();
//	std::list<int>::iterator ite = mstack.end();
//	++it;
//	--it;
//	while (it != ite)
//	{
//	std::cout << *it << std::endl;
//	++it;
//	}
//	std::list<int> s(mstack);
//	return 0;
//}


//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int main()
{
	//std::stack<int> a;
	//a.push(5);
	//a.push(17);
	//std::cout << a.top() << std::endl;
	//a.pop();
	//std::cout << a.size() << std::endl;
	//a.push(3);
	//a.push(5);
	//a.push(737);
	////[...]
	//a.push(0);
	
	
	//std::iterator it = a.begin();
	//std::iterator ite = a.end();
	//++it;
	//--it;
	//while (it != ite)
	//{
	//std::cout << *it << std::endl;
	//++it;
	//}
	//std::stack<int> s(mstack);

	std::deque<int> a(1, 1);
	std::stack<int> b(a);
	b.push(10);
	std::cout << b.top() << std::endl;

	std::deque<int> c(1, 2);
	std::stack<int> d(c);
	d.push(20);
	std::cout << d.top() << std::endl;

	b.swap(d);

	std::cout << "after swap" << std::endl;
	std::cout << b.top() << std::endl;

	return 0;
}