// this program takes in integers from the user and sums them together
#include <iostream>

int main() {
    // declare variables
    int sum{0};
    int user_num;

    // loop reads integers from user input
    while (std::cin >> user_num) {
        // adds ints to the sum
        sum += user_num;
    }

    // print out results
    std::cout << sum << std::endl;
}