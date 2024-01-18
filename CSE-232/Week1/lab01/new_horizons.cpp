// WRITE YOUR CODE HERE

#include <iostream>
#include <iomanip>

int main() {
  // init input
  int days;
  std::cout << ""; // string displayed to user
  std::cin >> days; // variable assignment of input

  // conversion factors
  int au_metric = 149598000; // AU to km conversion
  int au_imperial = 92955800; // AU to mile conversion
  int c = 299792458; // speed of light (km/s)

  double i_dist = 37.33; // initial distance in AU 

  // new horizons params
  double v_metric = 14.33; // velocity km/s
  double v_imperial = 8.9; // velocity mi/s

  // declare variables 4 maths!
  double metric_result, imperial_result, time, dist_metric, dist_imperial;

  // maths
  dist_metric = (days * v_metric * 86400 / au_metric + i_dist) * au_metric;
  dist_imperial = (days * 86400 * v_imperial / au_imperial + i_dist) * au_imperial;
  time = dist_metric * 1000 / c / 3600 * 2;

  // output
  std::cout << std::fixed << std::setprecision(2); // round to 2 decimals
  std::cout << dist_metric << "\n" << dist_imperial << "\n" << time << "\n"; // output in terminal
}