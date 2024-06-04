#include "Span.hpp"

Span::Span(unsigned int N) : capacity(N), myVector() {}

Span::~Span() {}

Span::Span(const Span &other) : capacity(other.capacity), myVector(other.myVector) {}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		capacity = other.capacity;
		myVector = other.myVector;
	}
	return *this;
}

void Span::addNumber(int number)
{
	if (myVector.size() == capacity)
		throw std::exception();
	myVector.push_back(number);
}

long Span::shortestSpan()
{
	if (myVector.size() <= 1)
		throw std::exception();
	std::sort(myVector.begin(), myVector.end());
	long shortestSpan = std::abs(static_cast<long>(INT_MIN) - static_cast<long>(INT_MAX));
	for (size_t i = 1; i < myVector.size(); ++i)
	{
		long span = static_cast<long>(myVector[i]) - static_cast<long>(myVector[i - 1]);
		if (span < shortestSpan)
			shortestSpan = span;
	}
	return shortestSpan;
}

long Span::longestSpan()
{
	if (myVector.size() <= 1)
		throw std::exception();
	std::vector<int>::iterator minIt = std::min_element(myVector.begin(), myVector.end());
	std::vector<int>::iterator maxIt = std::max_element(myVector.begin(), myVector.end());
	return static_cast<long>(*maxIt) - static_cast<long>(*minIt);
}

void Span::addManyNumbers(long number)
{
	for (long i = 0; i < number; ++i)
	{
		addNumber(rand());
	}
}

void Span::printElements() const
{
	for (size_t i = 0; i < myVector.size(); i++)
	{
		std::cout << "myVector[" << i << "] : " << myVector[i] << std::endl;
	}
}

void Span::getSize() const
{
	std::cout << "Vector size: " << myVector.size() << std::endl;
}