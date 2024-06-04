#include "Span.hpp"
#include <iostream>

//int main()
//{
//	Span sp = Span(5);
//	sp.addNumber(6);
//	sp.addNumber(3);
//	sp.addNumber(17);
//	sp.addNumber(9);
//	sp.addNumber(11);
//	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;
//	return 0;
//}

int main()
{
	Span sp = Span(20000);
	//sp.addNumber(6);
	//sp.addNumber(3);
	//sp.addNumber(17);
	//sp.addNumber(9);
	//sp.addNumber(11);

	sp.addNumber(INT_MAX);
	sp.addNumber(INT_MIN);
	sp.addNumber(0);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	sp.printElements();

	sp.addManyNumbers(10000);
	sp.printElements();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}