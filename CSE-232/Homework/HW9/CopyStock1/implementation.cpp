#include "header.hpp"

void CopyStockPrices(double const * arr, double * arr_dest) {
  int i{0};
  while (arr) {
    arr_dest[i] = arr[i];
    i++;
    if (arr[i] < 0.0) {
      break;
    }
  }
  arr_dest[i] = arr[i];
}