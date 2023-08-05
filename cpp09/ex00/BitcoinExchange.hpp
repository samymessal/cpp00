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
		BitcoinExchange(const char *filepath);
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
		void	printer() const;
		void	print_input(const char *input);
	private:
		std::ifstream	data;
		std::map<std::string, float>	pars_data(std::ifstream &data);	
		bool	check_date(std::string date);
		float	check_value(std::string value);
		float	check_value_inp(std::string value);
		std::map<std::string, float>	btc_map;
		void	pars_input(std::ifstream &data);
		
};


#endif