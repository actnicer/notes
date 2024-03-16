 #include <vector>
 #include <iostream>
 #include "traffic_jam.h"
 int main() {
  std::vector<std::vector<bool>> road_map = {
    {false, true, false, true},
    {true, false, false, true},
    {false, true, false, false},
    {true, false, true, false}
  };
  std::cout << AreRoadsBalanced(road_map) << std::endl; // Should be true
  road_map = {
    {false, true, false, true},
    {true, false, false, false},
    {false, true, false, false},
    {false, false, true, false}
  };
  std::cout << AreRoadsBalanced(road_map) << std::endl; // Should be false
}

// Congratulations! You have been elected as the next governor of Michigan.
// As part of your campaign, you pledged to improve the roads across the
// Great Lakes State. Making good on your promise, you decide to first ensure
// that the roads are convenient for residents and that there will be no traffic
// jams, i.e., each city has the same number of incoming and outgoing roads.
// A member of your team has prepared a road_map for you to use. This map
// is a square matrix where the number of rows and columns is equal to the
// number of cities. If road_map[i][j] == true then there is a one-way road
// from city i to city j, i.e., city i has an outgoing road and city j
// has an incoming road. The road does not exist otherwise.
// Example
// For

// std::vector<std::vector<bool>> road_map = {
//     {false, true, false, false},
//     {false, false, true, true},
//     {true, false, false, false},
//     {false, true, false, false}
// };

// the output should be: AreRoadsBalanced(road_map) == true
// The cities will be connected as follows:
// example balanced map
// Cities 0, 2, and 3 each have one incoming road and one outgoing road.
// City 1 has two incoming and two outgoing roads. Thus, the output should
// be true.
// For

// std::vector<std::vector<bool>> road_map = {
//     {false, true, false},
//     {true, false, false},
//     {false, true, false},
// };

// the output should be: AreRoadsBalanced(road_map) == false
// The cities will be connected as follows:
// example unbalanced map
// City 0 has one incoming road and one outgoing road. City 1 has two incoming
// roads and one outgoing road. City 2 has one outgoing road and no incoming roads.
// Thus, the output should be false.
// Be sure to write your header and implementation files in TrafficJam/traffic_jam.h 
// and TrafficJam/traffic_jam.cpp. A main file has been provided to help get started on testing.