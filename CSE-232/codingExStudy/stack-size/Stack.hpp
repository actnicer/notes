#pragma once
// This file can't be changed

class Node {
 public:
  char letter;
  Node* down;
  Node(char c) : letter(c), down(nullptr) {}
};

class Stack {
 private:
  Node* top_ = nullptr;

 public:
  Stack() = default;
  void push(char c);
  char top();
  void pop();
  int size(); // TODO
};