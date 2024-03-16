#include "Table.hpp"
#include <random>

// included in that class
Table::Table(size_t width, size_t height, int val) : height_(height)
  
// PLACE A ':' HERE FOLLOWED BY ANY MEMBER VARIABLE INITIALIZIONS
{
  // ADDITIONAL SETUP FOR THE CONSTRUCTOR
  width_ = width;
  for (int i{0}; i < static_cast<int>(height); i++) {
    row_t a(width, val);
    table_.push_back(a);
  }
}

// WRITE THE DEFINITION FOR Table::PrintTable
void Table::PrintTable(std::ostream & ot) const {
  for(auto b : table_){
    for (auto c : b) {
      ot << c << ", ";
    }
    ot << '\n';
  }
}

// WRITE THE DEFINITION FOR Table::FillRandom
void Table::FillRandom(int low, int high, int seed) {
   // Seed the PRNG (MT19937) with a fixed value (0 in this instance).
  std::mt19937 generator(seed);
  std::uniform_int_distribution<int> distribution(low, high);

  // Generate ten integers in the interval [1, 6] (always the same sequence).
  // for (size_t i = 0; i < 10; ++i) {
  //   std::cout << distribution(generator) << " ";
  // }
  for(auto & b : table_){
    for (auto & c : b) {
      c = distribution(generator);
    }
  }
}

// WRITE THE DEFINITION FOR Table::SetValue
bool Table::SetValue(size_t col, size_t row, int val) {
  if (col >= width_ || row >= height_) {
    return false;
  } 
  table_.at(row).at(col) = val;
  return true;
}

// WRITE THE DEFINITION FOR Table::GetValue
int Table::GetValue(size_t col, size_t row) const {
  if (col >= width_ || row >= height_) {
    throw std::out_of_range("error message");
  } 
  return table_.at(row).at(col);
}

