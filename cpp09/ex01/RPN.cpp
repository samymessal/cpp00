#include "RPN.hpp"

// Constructors
RPN::RPN()
{
	// std::cout << "\e[0;33mDefault Constructor called of RPN\e[0m" << std::endl;
}

RPN::RPN(std::string expression)
{
	// std::cout << "\e[0;33mDefault Constructor called of RPN\e[0m" << std::endl;
	do_calcu(expression);
	return ;
}

RPN::RPN(const RPN &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of RPN\e[0m" << std::endl;
}


// Destructor
RPN::~RPN()
{
	// std::cout << "\e[0;31mDestructor called of RPN\e[0m" << std::endl;
}


// Operators
RPN & RPN::operator=(const RPN &assign)
{
	(void) assign;
	return *this;
}

void	RPN::do_calcu(std::string expression)
{
	std::istringstream	iss(expression);
	std::string			token;
	int					operand1 = 0;
	int					operand2 = 0;
	std::stack<int>		rpn_stack;

	while (iss >> token)
	{
		if (isdigit(token[0]))
		{
			std::istringstream(token) >> operand1;
			rpn_stack.push(operand1);
		}
		else
		{
			if (rpn_stack.size() < 2)
			{
				std::cerr << "Invalid Expression, not enough operands" << std::endl;
				return ;
			}
			operand2 = rpn_stack.top();
			rpn_stack.pop();
			operand1 = rpn_stack.top();
			rpn_stack.pop();
			if (token == "+") {
                rpn_stack.push(operand1 + operand2);
            } else if (token == "-") {
                rpn_stack.push(operand1 - operand2);
            } else if (token == "*") {
                rpn_stack.push(operand1 * operand2);
            } else if (token == "/") {
				if (operand2 == 0)
				{
					std::cerr << "Error, division by 0 not allowed" << std::endl;
					return ;
				}
                rpn_stack.push(operand1 / operand2);
            }	else {
				std::cerr << "Invalid expression, unknown operand" << std::endl;
				return ;
			}
		}
	}
	if (rpn_stack.size() != 1) {
        std::cerr << "Invalid expression: Too many operands." << std::endl;
        return ;
    }
		std::cout << rpn_stack.top() << std::endl;
	return ;
}