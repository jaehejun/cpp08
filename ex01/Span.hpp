#ifndef SPAN_HPP
#define SPAN_HPP

//template <typename T>
class Span
{
	private:
		unsigned int capacity;
		unsigned int size;

	public:
		Span(unsigned int N);
		~Span();
		Span &Span(const Span &other);
		Span &operator=(const Span &other);

		void addNumber();
		int shortestSpan();
		int longestSpan();
		void addThousand();

};

#endif