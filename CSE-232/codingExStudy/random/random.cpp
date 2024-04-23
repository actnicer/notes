#include <iostream>
#include <random>
#include <vector>
#include <string>

int main() {
    // Seed the random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    
    // Define the range of random numbers
    int min = 0;
    int max = 1;
    
    // Create a uniform distribution
    std::uniform_int_distribution<> dis(min, max);
    
    // Generate random numbers
    // for (int i = 0; i < 10; ++i) {
    //     int random_num = dis(gen);
    //     std::cout << random_num << ", ";
    // }
    std::cout << '\n';

    int random_single = dis(gen);

    std::vector<std::string> coin{"heads", "tails"};

    std::cout << "Random single: " << coin[random_single - 1] << '\n';

    return 0;
}