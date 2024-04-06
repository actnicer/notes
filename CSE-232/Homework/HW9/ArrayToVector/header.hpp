#pragma once

#include <iostream>
#include <vector>

template <typename T>
std::vector<T> ArrayToVector(T * const arr, int sz) {
  std::vector<T> vec(arr, arr + sz);
  delete [] arr;
  return vec;
}