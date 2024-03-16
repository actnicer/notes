#pragma once

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

class Price {
private:
  double f_price{0};
public:
  // constructor declaration for Price class, val initialized to zero
  Price(double val = 0);

  // oeprator overloading basics: https://www.geeksforgeeks.org/operator-overloading-cpp/

  // output operator overload for Price class, outputs Price object to an std::ostream
  // takes in a output steam and a const ref to a Price object and returns reference to output stream 
  // 'friend' allows operators to access private members of the class; i.e. 'f_price'
  // https://en.cppreference.com/w/cpp/language/friend
  friend std::ostream& operator<<(std::ostream& os, const Price& price);
  friend std::istream& operator>>(std::istream& is, Price& price);

  // addition operator, add two Price objects together
  // does not modify current object so must declare const
  Price operator+(const Price& other) const;
  Price operator-(const Price& other) const;

  // compound addition assignment operator, modifies current object in place
  // returns a reference to the modified current object
  // returning a reference allows for method chaining: price1 += price2 += price3;
  Price& operator+=(const Price& other);
  Price& operator-=(const Price& other);
};