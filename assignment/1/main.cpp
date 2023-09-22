#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;
    float marks;
    char grade;

public:
    // Getter and Setter functions for each data member
    std::string getName() const { return name; }
    void setName(const std::string& newName) { name = newName; }

    int getRollNumber() const { return rollNumber; }
    void setRollNumber(int newRollNumber) { rollNumber = newRollNumber; }

    float getMarks() const { return marks; }
    void setMarks(float newMarks) { marks = newMarks; }

    char getGrade() const { return grade; }

    // Calculate the grade based on the grading scale
    void calculateGrade() {
        if (marks >= 90) grade = 'A';
        else if (marks >= 80) grade = 'B';
        else if (marks >= 70) grade = 'C';
        else if (marks >= 60) grade = 'D';
        else grade = 'F';
    }
};

int main() {
    Student student;
    int choice;

    do {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Accept Information" << std::endl;
        std::cout << "2. Display Information" << std::endl;
        std::cout << "3. Calculate Grade" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
        std::cout << "Enter student name: ";
                       std::cin.ignore(); // Ignore newline character left in the buffer
                       std::getline(std::cin, student.setName());
                       std::cout << "Enter student roll number: ";
                       std::cin >> student.setRollNumber();
                       std::cout << "Enter student marks: ";
                       std::cin >> student.setMarks();
                       break;



            case 2:
                std::cout << "Student Information:" << std::endl;
                std::cout << "Name: " << student.getName() << std::endl;
                std::cout << "Roll Number: " << student.getRollNumber() << std::endl;
                std::cout << "Marks: " << student.getMarks() << std::endl;
                break;

            case 3:
                student.calculateGrade();
                std::cout << "Grade: " << student.getGrade() << std::endl;
                break;

            case 4:
                std::cout << "Exiting the program." << std::endl;
                break;

            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 4);

    return 0;
}




