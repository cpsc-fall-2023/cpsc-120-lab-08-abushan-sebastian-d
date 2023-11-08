// Sebastian Delgadillo
// cheb@csu.fullerton.edu
// @sdelgadiillo
// Partners: @84u5ro

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  double sum = 0.0;
  for (size_t i = 1; i < arguments.size(); ++i) {
    double value = std::stod(arguments[i]);
    sum += value;
  }

  double average = sum / (arguments.size() - 1);

  std::cout << "average = " << average << std::endl;

  return 0;
}