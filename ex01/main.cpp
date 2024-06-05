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
	std::vector<int> numbers;
	srand(time(NULL));
	for (int i = 0; i < 100000; ++i)
	{
		numbers.push_back((rand() % 200001) - 100000);
	}

	Span hundred(100);
	Span tenThousand(10000);

	try
	{
		hundred.addManyNumbers(numbers, 10000);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;;
	}
	
	tenThousand.addManyNumbers(numbers, 10000);
	
	std::cout << "Shortest: " << tenThousand.shortestSpan() << std::endl;
	std::cout << "Longest: " << tenThousand.longestSpan() << std::endl;
	
	return 0;
}