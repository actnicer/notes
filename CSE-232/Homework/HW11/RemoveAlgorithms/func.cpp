#include <string>
#include <vector>
#include <iterator>

int Func(int a) 
{
    std::vector<int> b(a);
    int value = 12;
    for (std::vector<int>::iterator iter = b.begin(); iter != b.end(); ++iter) {
        *iter = value++;
    }
    std::vector<int> c(b.rbegin(), b.rend());

    for (int i = 0; i < static_cast<int>(b.size()); ++i) {
        b.at(i) = 2 * b.at(i) + c.at(i);
    }

    int result = 0;
    for (std::vector<int>::iterator iter = b.begin() + 2; iter != b.end() - 2; ++iter) {
        if (std::to_string(*iter).find("2") != std::string::npos) {
            ++result;
        }
    }
    return result;
}

// Remove The Algorithms
// In the folder “RemoveTheAlgorithms” is an implementation and header file. 
// The function defined in that folder makes heavy use of algorithms to do 
// some convoluted task. You need to remove the uses of the algorithms 
// (like transform) and replace them with loops and other statements so 
// that the same functionality is maintained. A copy of the starter code is 
// saved in “RemoveTheAlgorithms/func.cpp.bak” in case you break 
// functionality which you are working on it.