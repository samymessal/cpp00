#include "BitcoinExchange.hpp"

// Constructors
BitcoinExchange::BitcoinExchange()
{
	std::cout << "\e[0;33mDefault Constructor called of BitcoinExchange\e[0m" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of BitcoinExchange\e[0m" << std::endl;
}


// Destructor
BitcoinExchange::~BitcoinExchange()
{
	std::cout << "\e[0;31mDestructor called of BitcoinExchange\e[0m" << std::endl;
}


// Operators
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &assign)
{
	(void) assign;
	return *this;
}



// Exceptions
const char * BitcoinExchange::BadDate::what() const throw()
{
	return "Error: Date format not valid";
}
const char * BitcoinExchange::MissVal::what() const throw()
{
	return "Error: Missing value";
}

const char * BitcoinExchange::ErrFile::what() const throw()
{
	return "Error: Could not open file";
}