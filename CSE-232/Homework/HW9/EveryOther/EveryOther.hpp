#pragma once

#include <vector>
#include <iostream>

template <typename T>
class EveryOther {
private:
  std::vector<T> vec_;
  bool flag_ = true;
public:
  EveryOther() {};
  EveryOther(std::initializer_list<T> lst) {
    flag_ = true;
    for (auto & i : lst) {
      if (flag_) {
        vec_.push_back(i);
      }
      flag_ = !flag_;
    }
  }

  void push_back(T val) {
    if (flag_) {
      vec_.push_back(val);
      flag_ = !flag_;
    }
  }
  int size() {
    return static_cast<int>(vec_.size());
  }
  friend std::ostream& operator<<(std::ostream& os, const EveryOther<T>& vct) {
    os << "EveryOther(";
    for (int i{0}; i < static_cast<int>(vct.vec_.size()); i++) {
      os << vct.vec_[i] << ", ";
    }
    os << ")";
    return os;
  }
};

// Write a parameterized type named EveryOther that behaves much like std::vector 
// (in the file named “EveryOther/EveryOther.hpp”). It has a member function 
// called push_back, but only every other call to the member function actually 
// does anything (actually pushed the element to the end of the structure). 
// The class should have a default constructor and a constructor that takes an 
// std::initializer_list (be sure that you only add every other element). 
// The other function that EveryOther needs to support is the operator<< and size, see the test cases for formating.
// This class is templated so that instances like EveryOther<int> and EveryOther<std::string> are supported.