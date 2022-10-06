//
// Created by david on 06.10.22.
//
#include "operations.hpp"

namespace math_submodule {
int operations::sum(const int &a, const int &b) {
  return a + b;
}

int operations::mult(const int &a, const int &b) {
  return a * b;
}

int operations::div(const int &a, const int &b) {
  if (b == 0) {
    throw std::overflow_error("Divide by zero exception");
  }
  return a / b;
}

int operations::sub(const int &a, const int &b) {
  return a - b;
}
}