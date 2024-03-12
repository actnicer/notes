#include <iostream>
#include <string>

// Define a struct named 'Person'
struct Person {
    std::string name;
    int age;
    double height;
};

int main() {
    // Declare an instance of the 'Person' struct
    Person person1;

    // Assign values to the members of the struct
    person1.name = "John";
    person1.age = 25;
    person1.height = 175.5;

    // Access and display the values
    std::cout << "Name: " << person1.name << std::endl;
    std::cout << "Age: " << person1.age << std::endl;
    std::cout << "Height: " << person1.height << std::endl;

    return 0;
}