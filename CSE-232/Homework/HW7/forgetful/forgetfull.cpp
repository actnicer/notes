// WRITE YOUR CODE HERE

#include "forgetful.hpp"

#include <vector>

void ForgetfulVector::push_back(int val) {
  auto insert_return = seen.insert(val);
  if (!insert_return.second) {
    data.push_back(val);
  }
}

int& ForgetfulVector::at(int index) {
  return data.at(index);
}

int ForgetfulVector::size() {
  return static_cast<int>(data.size());
}