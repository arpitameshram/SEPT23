#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double empSalary;

public:
    Employee() : empID(0), empName(""), empSalary(0.0) {} // Default constructor

    Employee(int id, const string& name, double salary)
        : empID(id), empName(name), empSalary(salary) {}

    void displayEmployeeDetails() {
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Employee Salary: $" << empSalary << endl;
    }

    double calculateGrossSalary() {
        if (empSalary <= 5000) {
            return empSalary * 1.10;
        } else if (empSalary <= 10000) {
            return empSalary * 1.15;
        } else {
            return empSalary * 1.20;
        }
    }

    int getEmpID() const {
        return empID;
    }

    // Setter methods if needed
    void setEmpName(const string& name) {
        empName = name;
    }

    void setEmpSalary(double salary) {
        empSalary = salary;
    }
};

int main() {
    Employee employees[100]; // Fixed-size array of employees
    int empCount = 0;
    int choice;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Add a new employee" << endl;
        cout << "2. Calculate gross salary for an employee" << endl;
        cout << "3. Display employee details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (empCount < 100) {
                    int id;
                    string name;
                    double salary;
                    cout << "Enter employee ID: ";
                    cin >> id;
                    cout << "Enter employee name: ";
                    cin.ignore();
                    getline(cin, name);
                    cout << "Enter employee salary: $";
                    cin >> salary;
                    employees[empCount] = Employee(id, name, salary);
                    empCount++;
                    cout << "Employee added successfully." << endl;
                } else {
                    cout << "Maximum number of employees reached." << endl;
                }
                break;

            case 2:
                if (empCount > 0) {
                    int id;
                    cout << "Enter employee ID: ";
                    cin >> id;
                    bool found = false;
                    for (int i = 0; i < empCount; i++) {
                        if (employees[i].getEmpID() == id) {
                            double grossSalary = employees[i].calculateGrossSalary();
                            cout << "Gross Salary: $" << grossSalary << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Employee not found." << endl;
                    }
                } else {
                    cout << "No employees in the system." << endl;
                }
                break;

            case 3:
                if (empCount > 0) {
                    int id;
                    cout << "Enter employee ID: ";
                    cin >> id;
                    bool found = false;
                    for (int i = 0; i < empCount; i++) {
                        if (employees[i].getEmpID() == id) {
                            employees[i].displayEmployeeDetails();
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Employee not found." << endl;
                    }
                } else {
                    cout << "No employees in the system." << endl;
                }
                break;

            case 4:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
