#pragma once

#include <vector>
#include <algorithm>
#include <iterator>

template <typename T>
std::vector<T> MaxVector(std::vector<T> const & vec_a, std::vector<T> const & vec_b) {
    typename std::vector<T>::const_iterator safe_vec_a_end = vec_a.end();
    bool vec_a_is_as_long_as_b = static_cast<int>(vec_a.size()) >= static_cast<int>(vec_b.size());
    if (vec_a_is_as_long_as_b) {
        safe_vec_a_end = vec_a.begin() + vec_b.size();
    } 
    std::vector<T> result;
    std::transform(vec_a.begin(), safe_vec_a_end, vec_b.begin(), std::back_inserter(result), 
        [](T const & left, T const & right){return std::max(left, right);}
    );
    if (!vec_a_is_as_long_as_b) {
        std::copy(vec_b.begin() + vec_a.size(), vec_b.end(), std::back_inserter(result));
    } else {
        std::copy(safe_vec_a_end, vec_a.end(), std::back_inserter(result));
    }
    return result;
}

// In the folder “MaxVector” is an implementation and header file. 
// You need to write a function, named "MaxVector", that takes 2 
// arguments. Both of these arguments are vectors. The function 
// should return a vector of a size equal to the longer of the two 
// arguments. The returned vector will have the larger of the two 
// elements from the arguments for each position.
// For example, if the two arguments were:

// {1, 4,  8, 13} and 
// {0, 10, 8, 11, 14}

// then the returned vector should be:

// {1, 10, 8, 13, 14}

// Tips

//     The problem description didn’t say the type of the elements 
//     of the vectors intentionally. Your solution should work on 
//     vectors of many different types (e.g. ints and strings). 
//     You can assume however that both arguments are vectors of the same type.
//     std::transform is an extremely helpful algorithm for this 
//     problem, but be sure to not iterate past the end of either vector.
//     If you get an error mentioning "std::vector is a dependent scope", 
//     look at https://stackoverflow.com/questions/22874535/dependent-scope-need-typename-in-front
//     See the main.cpp I’ve provided for an example of using MaxVector.

// None of your code for this problem can use the for or while keywords. 
// You also aren’t allowed to use the std::for_each algorithm. 
// This constraint is to motivate you to learn and use the algorithms 
// in <algorithm> and <numeric>. Please be sure that any comments also 
// don’t have those words. If such a word must appear in your code 
// (for example in a citation or comment), insert an interrupting space. 
// Example https://stackoverflow.com/questions/11738939/never-seen-before-c-for-loop 
// should be changed to https://stackoverflow.com/questions/11738939/never-seen-before-c-fo r-loop .
