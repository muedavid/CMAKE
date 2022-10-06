//
// Created by david on 06.10.22.
//
#ifndef CMAKESYSTEM
#define CMAKESYSTEM "NO SYSTEM"
#endif

#include <iostream>
#include "test_lib/operations.hpp"
#include "test_lib_submodule/operations.hpp"


int main() {
  std::cout << "System: " << CMAKESYSTEM << "\n";
  math::operations op;
  int x = op.sum(2,3);
  std::cout << "result: " << x << "\n";

  math_submodule::operations op_sub;
  int y = op_sub.sum(2,3);
  std::cout << "result: " << y;
}