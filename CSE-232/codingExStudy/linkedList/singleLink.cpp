#include <iostream>
#include <sstream>
#include <string>

#include "singleLink.hpp"

// WRITE YOUR CODE HERE

std::ostream& operator<<(std::ostream& out, SingleLink const & list) {
  std::ostringstream oss;
  for (Node* itr = list.head_; itr != nullptr; itr = itr->next_) {
    oss << itr->data_ << ", ";
  }
  std::string s = oss.str();
  s = s.substr(0, s.size() - 2);
  out << s;
  return out;
};

void SingleLink::AppendBack(char dat) {
  Node* new_node = new Node(dat);

  if (head_ == nullptr) {
    head_ = new_node;
    return;
  }
  Node* current = head_;
  while (current->next_ != nullptr) {
    current = current->next_;
  }
  current->next_ = new_node;
}

int SingleLink::Count(char let) {
  int num = 0;
  Node* current = head_;
  while (current != nullptr) {
    if (current->data_ == let){
      num++;
    }
    current = current->next_;
  }
  return num;
}