#include <iostream>
#include <string>

// Define a Class named Student
class Student {
private:
    std::string name;
    int rollNumber;

public:
    // Constructor to initialize the object
    Student(std::string studentName, int studentRoll) {
        name = studentName;
        rollNumber = studentRoll;
    }

    // Member function to display student details
    void displayInfo() {
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "Roll Number : " << rollNumber << std::endl;
    }
};

int main() {
    // Creating an object of the Student class
    Student s1("Alex", 101);

    // Calling the member function
    std::cout << "--- Student Information ---" << std::endl;
    s1.displayInfo();

    return 0;
}