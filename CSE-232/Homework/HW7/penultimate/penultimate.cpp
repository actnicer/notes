#include <string>

#include "Penultimate.hpp"

Penultimate::Penultimate(std::string arg) : previous(arg) {}

std::string Penultimate::push_back(std::string arg) {
  std::string result = previous;
  previous = arg;
  return result;
}