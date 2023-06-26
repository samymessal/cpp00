#include "ScalarConverter.hpp"

// Constructors
ScalarConverter::ScalarConverter()
{
	std::cout << "\e[0;33mDefault Constructor called of ScalarConverter\e[0m" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of ScalarConverter\e[0m" << std::endl;
}


// Destructor
ScalarConverter::~ScalarConverter()
{
	std::cout << "\e[0;31mDestructor called of ScalarConverter\e[0m" << std::endl;
}


// Operators
ScalarConverter & ScalarConverter::operator=(const ScalarConverter &assign)
{
	(void) assign;
	return *this;
}

const char*	ScalarConverter::NotValid::what() const throw()
{
	return "Not a valid data type";
}

int	ScalarConverter::get_type(const std::string &toconv) const
{
	int		intVal;
	float	fVal;
	double	dVal;

	std::istringstream iss(toconv);
	
	if (toconv.length() == 1)
		return (0);
	if (iss >> intVal && iss.eof())
		return (1);
	iss.clear();
	iss.seekg(0);
	if (iss >> fVal && static_cast<int>(iss.tellg()) < static_cast<int>(toconv.length()) && 
		toconv[iss.tellg()] == 'f')
		return (2);
	iss.clear();
	iss.seekg(0);
	if (iss >> dVal && iss.eof())
		return (3);
	iss.clear();
	iss.seekg(0);
	if (toconv == "nan")
		return (4);
	throw ScalarConverter::NotValid();
}

void	ScalarConverter::printer(int intVal) const
{
	std::cout << "char: ";
	if (intVal >= 32 && intVal <= 126)
		std::cout << static_cast<char>(intVal) << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: " << intVal << std::endl;
	std::cout << "float: " << static_cast<float>(intVal) << "f"<< std::endl;
	std::cout << "double: " << static_cast<double>(intVal) << std::endl;
}

void	ScalarConverter::printer(float fVal) const
{
	std::cout << "char: ";
	if (fVal >= 32.0f && fVal <= 126.0f)
		std::cout << static_cast<char>(fVal) << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: ";
	if (fVal <= static_cast<float>(std::numeric_limits<int>::max()) && fVal >= static_cast<float>(std::numeric_limits<int>::min()))
		std::cout << static_cast<int>(fVal) << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "float: " << fVal << "f"<< std::endl;
	std::cout << "double: " << static_cast<double>(fVal) << std::endl;
}

void	ScalarConverter::printer(double dVal) const
{
	std::cout << "char: ";
	if (dVal >= 32.0 && dVal <= 126.0)
		std::cout << static_cast<char>(dVal) << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: ";
	if (dVal <= static_cast<double>(std::numeric_limits<int>::max()) && dVal >= static_cast<double>(std::numeric_limits<int>::min()))
		std::cout << static_cast<int>(dVal) << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "float: ";
	if (dVal <= static_cast<double>(std::numeric_limits<float>::max()) && dVal >= static_cast<double>(std::numeric_limits<float>::min()))
		std::cout << static_cast<double>(dVal) << "f"<< std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "double: " << dVal << std::endl;
}

void	ScalarConverter::printer(std::string impos) const
{
	if (impos == "impos")	
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "impossible" << std::endl;
		std::cout << "double: " << "impossible" << std::endl;
	}
	else
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "nanf" << std::endl;
		std::cout << "double: " << "nan" << std::endl;
	}
}

void	ScalarConverter::convert(const std::string &toconv) const
{
	int	type = get_type(toconv);
	std::istringstream	iss(toconv);
	int		intVal;
	double	dVal;

	if (type == 0 || type == 1)
	{
		iss >> intVal;
		if (intVal > std::numeric_limits<int>::max() || intVal < std::numeric_limits<int>::min())
			printer("impos");
		else
			printer(intVal);
	}
	else if (type == 2)
	{
		iss >> dVal;
		if (dVal > std::numeric_limits<float>::max() || dVal < std::numeric_limits<float>::min())
			printer("impos");
		else
			printer(dVal);
	}
	else if (type == 3)
	{
		iss >> dVal;
		if (dVal > std::numeric_limits<double>::max() || dVal < std::numeric_limits<double>::min())
			printer("impos");
		else
			printer(dVal);
	}
	else if (type == 4)
		printer("nan");
}