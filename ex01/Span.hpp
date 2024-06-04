#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>

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
		int shortestSpan();
		int longestSpan();
		void addManyNumbers();

		void printVector();
};

#endif