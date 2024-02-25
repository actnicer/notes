#include <iostream>
#include <string>

// Define a class named 'Person'
class Person {
private:
    // Private data members
    std::string name;
    int age;
    double height;

public:
    // Public member function to set values for private members
    void setInfo(const std::string& n, int a, double h) {
        // Access and modify private members within the class
        name = n;
        age = a;
        height = h;
    }

    // Public member function to display information about the person
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Height: " << height << std::endl;
    }
};

int main() {
    // Declare an instance of the 'Person' class
    Person person1;

    // Attempting to access private members directly will result in a compilation error
    // person1.name = "John"; // Error: 'std::__cxx11::string Person::name' is private within this context

    // Use public member function to set values
    person1.setInfo("John", 25, 175.5);

    // Call the public member function to display information
    person1.displayInfo();

    return 0;
}

// CLASS WITHOUT PRIVATE
// #include <iostream>
// #include <string>

// // Define a class named 'Person'
// class Person {
// public:
//     // Data members
//     std::string name;
//     int age;
//     double height;

//     // Member function to display information about the person
//     void displayInfo() {
//         std::cout << "Name: " << name << std::endl;
//         std::cout << "Age: " << age << std::endl;
//         std::cout << "Height: " << height << std::endl;
//     }
// };

// int main() {
//     // Declare an instance of the 'Person' class
//     Person person1;

//     // Assign values to the members of the class
//     person1.name = "John";
//     person1.age = 25;
//     person1.height = 175.5;

//     // Call the member function to display information
//     person1.displayInfo();

//     return 0;
// }