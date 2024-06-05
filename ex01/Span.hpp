#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <algorithm>
#include <iostream>
#include <climits>

class Span
{
	private:
		unsigned int capacity;
		std::vector<int> myVector;

	public:
		Span(unsigned int N);
		~Span();
		Span(const Span &other);
		Span &operator=(const Span &other);

		void addNumber(int number);
		long shortestSpan();
		long longestSpan();
		void addManyNumbers(std::vector<int> &other, unsigned int count);

		void printElements() const;
};

#endif