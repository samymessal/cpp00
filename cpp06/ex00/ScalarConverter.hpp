#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>
# include <limits>
# include <cstdlib>

class ScalarConverter
{
	public:
		// Constructors
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		
		// Destructor
		~ScalarConverter();
		
		// Operators
		class NotValid : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		ScalarConverter & operator=(const ScalarConverter &assign);
		void	convert(const std::string &toconv) const;
		
	private:
		int	get_type(const std::string &toconv) const;
		void	printer(int intVal) const;
		void	printer(float fVal) const;
		void	printer(double dVal) const;
		void	printer(std::string impos) const;
		
};

#endif