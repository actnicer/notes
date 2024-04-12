#include<iostream>
using std::ostream; using std::cout; using std::endl;
#include<sstream>
using std::ostringstream;
#include<stdexcept>
using std::out_of_range;
#include<string>
using std::string;
#include <algorithm>
using std::swap;

#include "singlelink.hpp"


ostream& operator<<(ostream & out, Node const & n){
  out << n.data_<<", ";
  return out;
}


SingleLink::SingleLink() : head_(nullptr), tail_(nullptr) {};

ostream& operator<<(ostream & out, SingleLink const & sl){
  // out << "List:";
  ostringstream oss;
  for(auto itr=sl.head_; itr !=nullptr; itr=itr->next_)
    oss <<itr->data_<<", ";
  string s = oss.str();
  s = s.substr(0,s.size() - 2);
  out << s;
  return out;
};


SingleLink::SingleLink(int dat){
  head_ = new Node(dat);
  tail_ = head_;
}

// append node with data dat to the end of the list
// fast because of the tail_ pointer
void SingleLink::append_back(int dat){
  Node *node = new Node(dat);
  if (tail_ != nullptr){
    tail_->next_ = node;
    tail_ = node;
  } else {
    head_= node;
    tail_= node;
  }
}

bool SingleLink::del(int val){
  Node *current_to_check;
  Node *previous;
  current_to_check = head_;
  if (head_ == nullptr){
    return false;
  }

  if (head_->data_ == val){
    head_ = head_->next_;
    delete current_to_check;
    return true;
  }
  previous = head_;
  current_to_check = head_->next_;
  while(current_to_check != nullptr){
    if (current_to_check->data_ == val){
      previous->next_ = current_to_check->next_;
      delete current_to_check;
      return true;
    }
    previous = current_to_check;
    current_to_check = current_to_check->next_;
  }
  return false;
}


Node & SingleLink::operator[](size_t indx){

  size_t cnt = 0;
  auto itr = head_;
  while (itr != nullptr) {
    if (cnt == indx)
      return *itr;
    itr = itr->next_;
    cnt++;
  }
  throw out_of_range("Index not found");
}

/* 
bit of work. we need to remember a pointer that walks
down sl, and tail_ walks down the new list. 
make a new node (copy the current sl node), update
*/
SingleLink::SingleLink(const SingleLink& sl){
  if (sl.head_ == nullptr){
    head_ = nullptr;
    tail_ = nullptr;
  } else {
    head_ = new Node(sl.head_->data_);
    tail_ = head_;
    Node* sl_ptr = sl.head_->next_;
    Node* new_node;
    while (sl_ptr != nullptr){
      new_node = new Node(sl_ptr->data_);
      tail_->next_ = new_node;
      sl_ptr = sl_ptr->next_;
      tail_ = new_node;
    }
  }
}


SingleLink& SingleLink::operator=(SingleLink sl){
  // x = y
  // x.operator=(y);
  swap(head_, sl.head_);
  swap(tail_, sl.tail_);
  return *this;
}


// walk down the list, moving head_ but remember it in to_del
// delete each node in turn, the set head_ and tail_
SingleLink::~SingleLink(){
  Node* to_del = head_;
  while (to_del != nullptr){
    head_ = head_->next_;
    delete to_del;
    to_del = head_;
  }
  head_ = nullptr;
  tail_ = nullptr;
}