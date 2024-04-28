#include <iostream>
using std::cout, std::endl;
#include <map>
using std::map;
#include <string>
using std::string;
#include <algorithm>
#include <vector>
using std::vector;
#include <set>
using std::set;
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

    // vector<double> points = {
    // 1.03545,
    // -495731.69,
    // 315.244256,
    // -533.55,
    // 245.566
    // };
    // std::sort(points.begin(), points.end(), [](double a, double b){ return a > b; });
    // vector<int> result;
    // std::transform(
    // points.begin(),
    // points.end(),
    // back_inserter(result),
    // [](auto const & x) {
    // return stoi(x);
    // }
    // );
    // std::copy(points.begin(), points.end(),
    // std::ostream_iterator<double>(cout, ", "));

    vector<int> v1 = {1, 6, 9, 100};
    vector<int> v2 = {2, 3, 209, 23};

    std::copy(v2.begin(), v2.end(), v1.begin());
    std::copy(v1.begin(), v1.end(), std::back_inserter(v2));

    std::copy(v1.begin(), v1.end(), std::ostream_iterator<int>(cout, ", "));
    cout << '\n';
    std::copy(v2.begin(), v2.end(), std::ostream_iterator<int>(cout, ", "));
    cout << '\n';
}