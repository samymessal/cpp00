#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{
	public:
		// Constructors
		Span();
		Span(const unsigned int max);
		Span(const Span &copy);
		
		// Destructor
		~Span();
		
		// Operators
		Span & operator=(const Span &assign);
		void			addNumber(const int &toadd);
		void			addArr(int	*arr);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		class MaxSize : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	private:
		unsigned int		_max;
		std::vector<int>	_vec;
};

#endif