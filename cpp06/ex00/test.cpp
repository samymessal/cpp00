#include "ScalarConverter.hpp"
#include <iostream>
#include <limits>


int main() {
  std::cout << "Max value of int: " << std::numeric_limits<int>::max() << std::endl;
  std::cout << "Min value of int: " << std::numeric_limits<int>::min() << std::endl;

  std::cout << "Max value of float: " << std::numeric_limits<float>::max() << std::endl;
  std::cout << "Min value of float: " << std::numeric_limits<float>::min() << std::endl;

  std::cout << "Max value of double: " << std::numeric_limits<double>::max() << std::endl;
  std::cout << "Min value of double: " << std::numeric_limits<double>::min() << std::endl;

  return 0;
}
