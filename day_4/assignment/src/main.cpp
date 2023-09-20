#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Member function to accept a date record
    void acceptRecord() {
        std::cout << "Enter day: ";
        std::cin >> day;
        std::cout << "Enter month: ";
        std::cin >> month;
        std::cout << "Enter year: ";
        std::cin >> year;
    }

    // Member function to print a date record
    void printRecord() {
        std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
    }

    // Member function to add days to the date
    void addDays(int count) {
        // You should implement this function based on the logic to add days
        // to the date while taking care of months and years.
    }

    // Member function to validate the date
    bool validateDate() {
        if (year < 1 || month < 1 || month > 12 || day < 1)
            return false;

        static const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            daysInMonth[2] = 29;

        return (day <= daysInMonth[month]);
    }
};

int main() {
    Date date;
    date.acceptRecord();

    if (date.validateDate()) {
        date.printRecord();
    } else {
        std::cout << "Invalid date." << std::endl;
    }

    return 0;
}
