#pragma once
#include <iostream>
#include <cassert>

class Complex{
private:
  int real_;
  int imaginary_;
public:
  // initializer
  Complex(int real, int imaginary);

  // accessors to getter functions
  int GetReal() const;
  int GetImaginary() const;

  // accessor for setters
  void SetReal(int real); 
  void SetImaginary(int imaginary);

  // operations
  friend std::ostream& operator<<(std::ostream& os, const Complex& comps);
  Complex operator*(const Complex& other) const;
  // modifying operation
  Complex& operator+=(const Complex& other);
};