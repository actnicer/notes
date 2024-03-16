
#include "traffic_jam.h"
#include <vector>
#include <algorithm>
using namespace std;

// create function to check if cities have same number
// of outgoing vs incoming roads, takes in const 
// reference to a 2d vector of boolean values
bool AreRoadsBalanced(vector<vector<bool>> const & roads) {

    // create two vectors, same size as roads to check , initialized with zeros
    // incoming vs outgoing roads
    vector<int> inc_checker(roads.size(), 0);
    vector<int> out_checker(roads.size(), 0);

    // iterate through values of roads and increment
    // outgoing or incoming if true at that index
    for (int i = 0; i < static_cast<int>(roads.size()); ++i) {
        for (int j = 0; j < static_cast<int>(roads[i].size()); ++j) {
            if (roads[i][j]) {
                inc_checker[j] += 1;
                out_checker[i] += 1;
            }
            
            
        }
    }

    // compare vectors to make sure number of 
    // incoming == outgoing roads
    if (inc_checker == out_checker) {
        return true;
    }
    return false;
}
