// create program which takes integer from user and sums the digits of the integer
// utilizing additive persistence ex 1234 is summed 1+2+3+4=10 then 1+0=1
// until the int has only one digit left

#include <iostream>

// function to iterate through digits and sum them all together
int additive_series(int num) {
    int sum{0};
    while (num != 0) {
        int digit = (num % 10);
        sum += digit;
        num /= 10;
    }
    return sum;
}

int main() {
// WRITE YOUR CODE HERE

    int user_num;

    // create while loop for user input
    while (std::cin >> user_num) {

        // if input is negative, break loop
        if (user_num < 0) {
            break;
        } 

        // if input is greater than 1 digit, enter loop to sum digits
        if (user_num > 9) {

            // initialize variable to count the number of persistence instances
            int add_per{0};

            // while the input is greater than 1 digit, call function to sum digits
            while (user_num > 9) {
                user_num = additive_series(user_num);

                // increment persistence counter
                add_per += 1;
            }

            // print output
            std::cout << add_per << " " << user_num << std::endl;
        }
    }

    return 0;
}