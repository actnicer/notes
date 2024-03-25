#include "header.hpp"

// Constructor definition of Price class
Price::Price(double val) : f_price(val) {}

// << and >> do not need to be defined as member functions, dont need Price::
std::ostream& operator<<(std::ostream& os, const Price& price) {
  // output format to fixed-point with 2 decimal places
  os << std::fixed << std::setprecision(2); 
  os << '$' << price.f_price;
  return os;
}

// make sure input stream has specific format accounting for $
std::istream& operator>>(std::istream& is, Price& price) {
  char dollarSign;
  is >> dollarSign >> price.f_price;
  return is;
} 

Price Price::operator+(const Price& other) const {
  return Price(f_price + other.f_price);
}

Price Price::operator-(const Price& other) const {
  return Price(f_price - other.f_price);
}

Price& Price::operator+=(const Price& other) {
  f_price += other.f_price;

  // special pointer, represents current obj instance within member function
  // returns a reference to the current object
  return *this;
}

Price& Price::operator-=(const Price& other) {
  f_price -= other.f_price;
  return *this;
}

