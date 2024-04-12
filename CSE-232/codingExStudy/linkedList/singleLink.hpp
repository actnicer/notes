// Note that no changes are permitted in this file.

#pragma once

#include <iostream>

struct Node {
  char data_;
  Node *next_;

  Node() : data_(0), next_(nullptr){};
  Node(int d) : data_(d), next_(nullptr){};
};

class SingleLink {
 public:
  Node *head_;
  SingleLink() : head_(nullptr){};
  void AppendBack(char);
  int Count (char); // TODO
};

std::ostream &operator<<(std::ostream &, SingleLink const &);