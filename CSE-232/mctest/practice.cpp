#include <iostream>
using std::cout, std::endl;
#include <map>
using std::map;
#include <string>
using std::string;
#include <algorithm>
#include <vector>
using std::vector;
#include <iterator>
#include <sstream>

void func(char& x) {
    x = 'x';
}

int main() {
    // map<int, string> id_to_name = {
    // {10, "Josh"},
    // {20, "Emily"},
    // };
    // id_to_name.insert({30, "Abdol"});
    // string x = id_to_name[20];
    // std::for_each(x.begin(), x.end(), func);
    // string b = id_to_name[20];
    // cout << id_to_name.size() << endl;
    // cout << b << endl;

    // map<string, string> nametocity =
    //     {{"Josh", "EL"},
    //     {"Emily", "CL"}};
    // if (nametocity["Mal"] == "DC")
    //     cout << "In DC ";
    // auto x = nametocity.begin();
    // cout << &x << '\n';

    vector<string> points = {
    "1",
    "12312",
    "575757",
    };
    vector<int> result;
    std::transform(
    points.begin(),
    points.end(),
    back_inserter(result),
    [](auto const & x) {
    return stoi(x);
    }
    );
    std::copy(result.begin(), result.end(),
    std::ostream_iterator<int>(cout, ", "));
}