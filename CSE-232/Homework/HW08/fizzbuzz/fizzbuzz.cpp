#include <iostream>
#include <istream>
using namespace std;

int main() {
    string fizzes{0};
    getline(cin, fizzes);
    // convert fizzes str to int
    int nums = stoi(fizzes);
    for (int i{1}; i <= nums; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "fizzbuzz ";
            continue;
        } else if  (i % 5 == 0) {
            cout << "buzz ";
            continue;
        } else if (i % 3 == 0) {
            cout << "fizz ";
            continue;
        } 
        cout << i << ' ';
    }
    cout << '\n';
}