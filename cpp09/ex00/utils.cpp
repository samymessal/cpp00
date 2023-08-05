/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:13:15 by smessal           #+#    #+#             */
/*   Updated: 2023/08/05 15:08:57 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::ifstream	read_file(std::string filepath)
{
	std::ifstream	data;

	data.open(filepath, std::ios::in);
	if (!data.isopen())
		throw BitcoinExchange::ErrFile();
	return (data);
}

bool	check_date(std::string date)
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

float	check_value(std::string value)
{
	std::istringstream	iss(value);
	float				val;

	iss >> val;
	if (val < 0 || !iss.eof())
		return (-1);
	else
		return (val);
}

std::map<std::string, float>	pars_data(std::ifstream data)
{
	std::string	line;
	size_t		separator;
	std::string	date;
	std::string	value;
	float		val;
	std::map<std::string, float>	btc_map;
	
	if (data.isopen())
	{
		getline(data, line); //skip first line
		while (getline(data, line))
		{
			separator = line.find(',');
			if (separator == std::string::npos)
				throw BitcoinExchange::MissVal();
			else
			{
				date = data.substr(0, separator);
				value = data.substr(separator + 1);
				val = check_value(value);
				if (check_date(date) && val >= 0)
					btc_map[date] = val;
				else
					throw BitcoinExchange::MissVal();
			}
		}
	}
}