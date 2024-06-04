#include "Span.hpp"

Span::Span(unsigned int N) : capacity(N), myVector() {}

Span::~Span() {}

Span::Span(const Span &other) : capacity(other.capacity), myVector(other.myVector) {}

void Span::addNumber(int number)
{
	if (myVector.size() == capacity)
		throw std::exception();
	myVector.push_back(number);
}

int Span::shortestSpan()
{
	if (myVector.size() <= 1)
		throw std::exception();
	return 1;
}

int Span::longestSpan()
{
	if (myVector.size() <= 1)
		throw std::exception();
	return 2;
}

void Span::addManyNumbers()
{
	;
}

void Span::printVector()
{
	std::cout << "print V!" << std::endl;
	for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
}