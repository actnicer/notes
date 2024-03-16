#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm> // for std::max_element
using namespace std;

int main () {
  string input_n, input_hp;
  getline(cin, input_n); // read input for names
  getline(cin, input_hp); // read input for HPs

  stringstream ss_n(input_n);
  stringstream ss_hp(input_hp);
  string token;
  int flag = 0;
  vector<int> hp;
  vector<string> names, header;

  // Read names
  while (getline(ss_n, token, ',')) {
    while (flag == 0) {
      header.push_back(token.substr(0, token.find(':')));
      flag = 1;
    }
    names.push_back(token.substr(token.find(':') + 1));
  }
  flag = 0;

  // Read HPs
  while (getline(ss_hp, token, ',')) {
    while (flag == 0) {
      header.push_back(token.substr(0, token.find(':')));
      flag = 1;
    }
    hp.push_back(stoi(token.substr(token.find(':') + 1)));
  }
  flag = 0;
  
  // print header text
  cout << header[0] << ',' << header[1] << ',' << '\n';

  for (int i = 0; i < static_cast<int>(names.size()); ++i) {
    cout << names[i] << ',' << hp[i] << ',' << '\n';
  }

  int max_hp = *max_element(hp.begin(), hp.end());
  cout << '\n' << "Max:" << '\n';
  for (int i = 0; i < static_cast<int>(hp.size()); ++i) {
    if (hp[i] == max_hp) {
      cout << names[i] << ',' << hp[i] << ',' << '\n';
    }
  }
}

// Pokemon have a variety of stats associated with them. 
// For this example, I’m drawing data from 
// https://gist.github.com/armgilles/194bcff35001e7eb53a2a8b441e8b2c6
// For example, the Pokemon named Caterpie has an HP of 45, 
// Blastoise has an hp of 79, and Victreebel has an hp of 80.
// This information provided to standard input would look like this:

// Name:Caterpie,Blastoise,Victreebel,
// HP:45,79,80,

// You need to write a program in the file “Pokemon_Stats/main.cpp” 
// that can read input like described above and output it in this form:

// Name,HP,
// Caterpie,45,
// Blastoise,79,
// Victreebel,80,

// Max:
// Victreebel,80,

// The input will always consist of two lines starting with the 
// column name and the elements will be separated by commas. 
// The second line will consist of positive integers. The 
// example input (also the first test case is also provided for 
// ease of testing using file redirection).