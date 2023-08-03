#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <limits>
# include <typeinfo>

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
		template <typename T>
		void	addArr(T container_int)
		{
			if (typeid(typename T::value_type) != typeid(int))
				throw BadType();
			if (_vec.size() + container_int.size() > _max)
				throw MaxSize();
			if (container_int.size() == 0)
				std::cout << "No values added, empty container" << std::endl;
			_vec.insert(_vec.end(), container_int.begin(), container_int.end());
		}
		void			addArr(int start, int end);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		class MaxSize : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class Empty : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class BadType : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	private:
		unsigned int		_max;
		std::vector<int>	_vec;
};

#endif