#include <iostream>

int main() {
    // declare variables
    int sum{0};
    char length1;
    int length2;
    char user_lengths;

    std::cin >> user_lengths;

    // loop reads integers from user input
    while (user_lengths) {
        length1 += user_lengths;
        if (user_lengths == ' ') {
            while (user_lengths) {
                length2 += user_lengths;
                if (user_lengths == '/0') {
                    break;
                }
            }
        }
    }

    // print out results
    // std::cout << sum << std::endl;
}