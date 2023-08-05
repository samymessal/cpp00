#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <map>
# include <sstream>

class BitcoinExchange
{
	public:
		// Constructors
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		
		// Destructor
		~BitcoinExchange();
		
		// Operators
		BitcoinExchange & operator=(const BitcoinExchange &assign);
		
		// Exceptions
		class BadDate : public std::exception {
			virtual const char* what() const throw();
		};
		class MissVal : public std::exception {
			virtual const char* what() const throw();
		};
		class ErrFile : public std::exception {
			virtual const char* what() const throw();
		};
		
	private:
		
};

#endif