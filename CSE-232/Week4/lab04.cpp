#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstdint>

using std::cout; using std::endl; using std::cin;
using std::string;
using std::pow;
using std::sort;

string Abbreviate(string const & loc){
  string l = loc, oldl="";
  string::size_type indx=1;
  while (indx < l.size()){
    sort(l.begin(), l.end()); // make sure sorted
    if (l[indx] == l[indx-1]){
      oldl = l;
      //cout << "pre:"<<oldl<<endl;
      l = oldl.substr(0,indx-1) ;
      //cout << "no repeat:"<<l<<endl;
      l.push_back(static_cast<char>(oldl[indx]+1)) ;
      //cout << "with pushback:"<<l<<endl;
      l += oldl.substr(indx+1);
      //cout << "post:"<<l<<endl;
    }
    else
      indx += 1;
  }
  return l;
}

std::int64_t LocToDec(string const & loc){
  std::int64_t sum = 0;
  for (auto ch : loc)
    sum += pow(2,ch-'a');
  return sum;
}

string DecToLoc(std::int64_t dec){
  string result(dec,'a');
  return Abbreviate(result);
}

std::int64_t AddLoc(string const & loc1, string const & loc2){
  string result = loc1 + loc2;
  result = Abbreviate(result);
  return LocToDec(result);
}



int main () {
  cout << "Give me a location string:" << endl;
  string loc_str;
  cin >> loc_str;

  cout << "Give me an integer:" << endl;
  int64_t l;
  cin >> l;

  cout << loc_str << " to dec: " << LocToDec(loc_str) << endl;
  cout << loc_str << " abbreviated: " << Abbreviate(loc_str) << endl;
  cout << l << " to loc: " << DecToLoc(l) << endl;
  cout << "Give me two more location strings:" << endl;
  string a, b;
  cin >> a >> b;
  cout << "Sum of " << a << " and " << b << " is: "
       << AddLoc(a, b)
       << endl;
  return 0;
}