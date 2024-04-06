#include "header.hpp"

void CopyStockPrices(double const * arr, double * arr_dest) {
  // first element is desired size, cast to int and 
  // iterate though desired elements, copying to arr_dest
  for (int i{0}; i <= static_cast<int>(arr[0]); i++) {
    arr_dest[i] = arr[i];
  }
}