#include "forgetful.hpp"
#include <cassert>

int main() {
  ForgetfulVector fv; 
  fv.push_back(1);
  fv.push_back(2);
  fv.push_back(3);
  fv.push_back(2);

  // Currently only "knows about" [2] as it "forgets" the first occurrence of 1, 2, and 3
  assert(fv.size() == 1); // Should be 1
  fv.push_back(1); // now holds [2, 1] as this is the second time seeing a 1
  assert(fv.at(0) == 2); // returns a 2 as that is the value in index 0 in this forgetful vector
  assert(fv.at(1) == 1);

}

// In the folder “ForgetfulVector” is an implementation and header file. Write a class, 
// named ForgetfulVector, that acts like a vector in that it supports the size, at, 
// and push_back methods. This class only needs to support the storage of ints 
// (templated classes will be taught later). The one strange thing is that the 
// ForgetfulVector “forgets” the first time it encounters a value, and doesn’t 
// present that value or give it an index.
// Example use:

// std::vector<int> vec = {1, 2, 3, 2};
// ForgetfulVector fv(); 
// fv.push_back(1);
// fv.push_back(2);
// fv.push_back(3);
// fv.push_back(2);

// // Currently only "knows about" [2] as it "forgets" the first occurrence of 1, 2, and 3
// assert(fv.size() == 1); // Should be 1
// fv.push_back(1); // now holds [2, 1] as this is the second time seeing a 1
// assert(fv.at(0) == 2); // returns a 2 as that is the value in index 0 in this forgetful vector
// assert(fv.at(1) == 1);
