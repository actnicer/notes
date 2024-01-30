#include <iostream>
#include <cmath>
#include <iomanip>

// YOUR FUNCTIONS GO HERE
double Fn(double x) {
  return -6 * std::pow(x, 2) + 5 * x + 3;
}

double Integral(double x) {
  return -2 * std::pow(x, 3) + (5.0 / 2.0) * std::pow(x, 2) + 3 * x;
}

double EstimateWithTraps(double a, double b, int n) {
  const double dx = (b - a) / n;
  double sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += Fn(a + dx * (i -1)) + Fn(a + dx * i);
  }
  return sum * (dx/2);
}

// Trapezoid calculation method...
int main()
{
  std::cout << "Hello world!!!\n";

  // YOUR MAIN IO GOES HERE
  // declare initial variables
  double a, b, tolerance;
  int n;

  // collect input from user
  std::cout << "Lower Range ";
  std::cin >> a;
  std::cout << "Upper Range: ";
  std::cin >> b;
  std::cout << "Tolerance: ";
  std::cin >> tolerance;
  std::cout << "Initial trapezoid count: ";
  std::cin >> n;

  double estimate = EstimateWithTraps(a, b, n);
  double xtrue = Integral(b) - Integral(a);
  double diff = std::fabs(estimate - xtrue);
  std::cout << "Estimate:" << std::fixed << std::setprecision(4) << estimate << ", Number of Traps:" << n 
            << ", Diff:" << diff << std::endl;

  do {
    n *= 2;
    estimate = EstimateWithTraps(a, b, n);
    diff = std::abs(estimate - xtrue);
    std::cout << "Estimate:" << estimate << ", Number of Traps:" << n
              << ", Diff:" << diff << std::endl;

  }
  while (diff > tolerance);
}