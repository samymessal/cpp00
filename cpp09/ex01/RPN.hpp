#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <sstream>

class RPN
{
	public:
		// Constructors
		RPN();
		RPN(std::string expression);
		RPN(const RPN &copy);
		
		// Destructor
		~RPN();
		
		// Operators
		RPN		&operator=(const RPN &assign);
		void	do_calcu(std::string expression);
};

#endif