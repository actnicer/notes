#include "Matrix.hpp"
#include <iostream>

int main() {
  Matrix my_matrix{2, 2, int{20}};
  Matrix your_matrix{2, 2, int{20}};
  Matrix their_matrix{my_matrix + your_matrix};

  std::cout << their_matrix << '\n';
}
