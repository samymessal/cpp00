/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:06:03 by smessal           #+#    #+#             */
/*   Updated: 2023/08/07 11:55:24 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Constructors
BitcoinExchange::BitcoinExchange()
{
	return ;
}

BitcoinExchange::BitcoinExchange(const char *filepath)
{
	std::ifstream	data;
	data.open(filepath);
	if (!data.is_open())
		throw BitcoinExchange::ErrFile();
	btc_map = pars_data(data);
	data.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	btc_map = copy.getmap();
	std::cout << "\e[0;33mCopy Constructor called of BitcoinExchange\e[0m" << std::endl;
}


// Destructor
BitcoinExchange::~BitcoinExchange()
{
	// std::cout << "\e[0;31mDestructor called of BitcoinExchange\e[0m" << std::endl;
}


// Operators
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &assign)
{
	btc_map = assign.getmap();
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

std::map<std::string, float>	BitcoinExchange::getmap() const
{
	return (btc_map);
}

bool	BitcoinExchange::check_date(std::string date)
{
	std::istringstream	iss(date);
	unsigned int		year;
	unsigned int		month;
	unsigned int		day;
	char				sep;
	
	iss >> year;
	iss >> sep;
	if (sep != '-')
		return (0);
	iss >> month;
	if (month == 0 || month > 12)
		return (0);
	iss >> sep;
	if (sep != '-')
		return (0);
	iss >> day;
	if (day == 0 || day > 31)
		return (0);
	if (!iss.eof())
		return (0);
	return (1);	
}

float	BitcoinExchange::check_value(std::string value)
{
	std::istringstream	iss(value);
	float				val;

	iss >> val;
	if (val < 0 || !iss.eof())
		return (-1);
	else
		return (val);
}

float	BitcoinExchange::check_value_inp(std::string value)
{
	std::istringstream	iss(value);
	float				val;

	iss >> val;
	if (val < 0 || val > 1000 || !iss.eof())
		return (-1);
	else
		return (val);
}

std::map<std::string, float>	BitcoinExchange::pars_data(std::ifstream &data)
{
	std::string	line;
	size_t		separator;
	std::string	date;
	std::string	value;
	float		val;
	std::map<std::string, float>	btc_map;
	
	if (data.is_open())
	{
		getline(data, line); //skip first line
		while (getline(data, line))
		{
			separator = line.find(',');
			if (separator == std::string::npos)
			{
				data.close();
				throw BitcoinExchange::MissVal();
			}
			else
			{
				date = line.substr(0, separator);
				value = line.substr(separator + 1);
				val = check_value(value);
				if (check_date(date) && val >= 0)
					btc_map[date] = val;
				else
				{
					data.close();
					throw BitcoinExchange::MissVal();
				}
			}
		}
	}
	return (btc_map);
}

void	BitcoinExchange::pars_input(std::ifstream &input)
{
	std::string	line;
	size_t		separator;
	std::string	date;
	std::string	value;
	float		val;
	float		match;
	std::map<std::string, float>::iterator it;

	if (input.is_open())
	{
		getline(input, line); //skip first line
		while (getline(input, line))
		{
			separator = line.find('|');
			if (separator == std::string::npos)
			{
				std::cout << "Error: Missing separator" << std::endl;
			}
			else
			{
				date = line.substr(0, separator - 1);
				value = line.substr(separator + 1);
				val = check_value_inp(value);
				if (check_date(date) && val >= 0)
				{
					if (btc_map.find(date) == btc_map.end())
					{
						it = btc_map.lower_bound(date);
						if (it != btc_map.begin())
						{
							--it;
							match = it->second;
						}
						else
							match = 0;
					}
					else
						match = btc_map[date];
					std::cout << date << " => " << val << " = " << match * val << std::endl;
				}
				else if (!check_date(date))
				{
					std::cout << "Error: Bad Date" << std::endl;
				}
				else
					std::cout << "Error: Bad value" << std::endl;
			}
		}
	}
}

void	BitcoinExchange::printer() const
{
	for(std::map<std::string, float>::const_iterator it = btc_map.begin(); it != btc_map.end(); ++it)
	{
		std::cout << "Date: " << it->first << " Value: " << it->second << std::endl;
	}
}

void	BitcoinExchange::print_input(const char *path_input)
{
	std::ifstream	input;
	input.open(path_input);
	if (!input.is_open())
		throw BitcoinExchange::ErrFile();
	pars_input(input);
	input.close();
}
