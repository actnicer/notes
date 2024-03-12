#include <iostream>
#include <vector>

std::vector<int> SumByIndex(const std::vector<std::vector<int>>& userVec) 
{
  size_t maxLength = 0;
  for (const auto& subvector : userVec) 
  {
    maxLength = std::max(maxLength, subvector.size());
  }

  // initialize result vector with zeros
  std::vector<int> result(maxLength, 0);

  // sum the subvectors of userVec at each position
  for (const auto& subvector : userVec) 
  {
    for (size_t i = 0; i < subvector.size(); ++i) 
    {
      result[i] += subvector[i];
    }
  }

  return result;
}

// In the file SumByIndex/implementation.cpp, you need to write a function named SumByIndex 
// that takes a 2D vector of ints and returns a 1D vector of ints. The vector returned 
// should be the sum of all of the argument’s subvectors at that position.
// For instance, if the argument was {{1, 2, 3}, {4, 9}} the correct return 
// value would be {5, 11, 3} because 5 is the sum of 1 and 4, and 11 is the 
// sum of 2 and 9. Please note that not all of the subvectors will be the same length, 
// so be careful not to index out of bounds. I’ve already written the header file for you.