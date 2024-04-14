#include "Complex.hpp"

Complex::Complex(int real, int imaginary) : real_(real), imaginary_(imaginary) {}

// getters
int Complex::GetReal() const { return real_; }
int Complex::GetImaginary() const { return imaginary_; }

// setters
void Complex::SetReal(int real) { real_ = real; }
void Complex::SetImaginary(int imaginary) { imaginary_ = imaginary; }

std::ostream& operator<<(std::ostream& os, const Complex& comps) {
  if (comps.imaginary_ < 0)
    os << comps.real_ << comps.imaginary_ << 'i';
  else 
    os << comps.real_ << '+' << comps.imaginary_ << 'i';
  return os;
}

Complex& Complex::operator+=(const Complex& other) {
    real_ += other.real_;
    imaginary_ += other.imaginary_;
    // return reference to current object
    return *this;
}

Complex Complex::operator*(const Complex& other) const {
  return Complex(real_*other.real_ - imaginary_*other.imaginary_, 
                  real_*other.imaginary_ + imaginary_*other.real_);
}