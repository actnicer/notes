#pragma once 

#include <iostream>
#include <vector>
#include <iterator>

template <typename T>
typename std::vector<T>::const_iterator FindSmallestIndexRange(std::vector<T> & data, int frst, int last);
  
template <typename Iterator>
void DoubleIteratorRange(Iterator strt, Iterator fin) {
  while (strt != fin) {
    *strt *= 2;
    ++strt;
  }
}