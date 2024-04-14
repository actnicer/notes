#include "Complex.hpp"

int main() {
  Complex c(4, 5);
  assert(c.GetReal() == 4);
  assert(c.GetImaginary() == 5);
  std::cout << c << std::endl; // Should print "4+5i"
  Complex c2(7, 9);
  Complex c3 = c * c2;
  c += c2;
  std::cout << c3 << std::endl; // Should print "-17+71i"
  std::cout << c << std::endl; // 
}