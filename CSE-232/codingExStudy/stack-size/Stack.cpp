#include "Stack.hpp"

void Stack::push(char c) {
  Node* new_top = new Node(c);
  new_top->down = top_;
  top_ = new_top;
}
char Stack::top() { return top_->letter; }
void Stack::pop() {
  Node* new_top = top_->down;
  delete top_;
  top_ = new_top;
}

// WRITE YOUR CODE HERE

int Stack::size() {
  int count = 0;
  Node* current = top_;
  while (current != nullptr) {
    count++;
    current = current->down;
  }
  return count;
}