#include "Penultimate.hpp"
#include <string>
#include <cassert>

int main() {
  Penultimate p("first");
  std::string s = p.push_back("second"); // s is "first"
  assert(s == "first");
  p.push_back("Third"); // returns "second"
  s = p.push_back("last"); // returns "Third"
  assert(s == "Third");
}

// In the folder “Penultimate” is an implementation and header file. 
// You need to write a class, named "Penultimate". This class has just
//  one method (member function) named push_back, that takes a 
//  string and returns a string. The string returned by push_back 
//  is the string that was provided to push_back in the previous 
//  call of the method (or the string provided to the constructor if this is the first call to push_back.
// Example:

// Penultimate p("first");
// string s = p.push_back("second"); // s is "first"
// p.push_back("Third"); // returns "second"
// p.push_back("last"); // returns "Third"