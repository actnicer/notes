#include "Generic.hpp"

bool pass_fail(std::pair<std::string, int> a) {
  if (a.second >= 600) {
    return true;
  }
  return false;
}

bool alpham(std::pair<std::string, int> a, std::pair<std::string, int> b) {
  if (a.first < b.first) {
    return true;
  }
  return false;
}

void PassOrFail(std::vector<std::pair<std::string, int>> &v) {
  auto part = std::partition(v.begin(), v.end(), pass_fail);
  std::sort(v.begin(), part, alpham);
  std::sort(part, v.end(), alpham);
}

void ShiftRange(std::vector<int> &v, int left, int right) {
  auto part = std::partition(v.begin(), v.end(), 
    [&left, &right](int &a){ 
      if (a >= left && a <= right) return false; 
      return true;
      }
    );
  std::sort(v.begin(), part);  
  std::sort(part, v.end());
}

std::vector<int> Fibonacci(int n) {
  
  std::vector<int> result(n, 1);
  if(n == 1 || n == 2 || n == 0)
    return result;
  int prev1 = 1;
  int prev2 = prev1;
  std::for_each(
    result.begin() + 2, 
    result.end(), 
    [&prev1, &prev2](int &a) {
        a = prev1 + prev2;
        prev2 = prev1;
        prev1 = a;
        }
    );
  return result;
}

int BinaryToInt(const std::string &binary_str) {
  int result = std::stoi(binary_str, 0, 2);
  return result;
}
