#pragma once

#include <stack> 

template <typename T>
std::stack<T> reverse_stack(std::stack<T> ordered) {
  std::stack<T> reversed;
  
  while (!ordered.empty()) {
    reversed.push(ordered.top());
    ordered.pop();
  }
  return reversed;
}

// Stack
// Write a function called reverse_stack that takes an 
// std::stack and returns a new stack with the reversed 
// order of elements within (meaning what was on the top 
// of the argument stack is on the bottom of the returned stack).
// Put your code in a file named "Stack/Stack.hpp".
// The documentation for std::stack is found here: https://en.cppreference.com/w/cpp/container/stack