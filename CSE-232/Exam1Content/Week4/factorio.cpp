#include <cmath>
#include <iostream>

// function takes in three vales
// u238 is passed to the function as a reference ie Centrifuge(time, ore, &u_238)
double Centrifuge(int &time, int &ore, double * const u238) {
  double u235{0};
  while (time >= 12 && ore >= 10) {
    if (time >= 0 && ore >= 0) {
      u235 += 0.007;
      // must dereference u238 to modify its value
      *u238 += 0.993;
    }
    time -= 12;
    ore -= 10;
  } 
  return u235;
}