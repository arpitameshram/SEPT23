#include <iostream>

class TollBooth {
private:
    int totalVehicles;
    double totalRevenue;

public:
    TollBooth() : totalVehicles(0), totalRevenue(0.0) {}

    void reset() {
        totalVehicles = 0;
        totalRevenue = 0.0;
    }

    void vehiclePayingToll(int vehicleType, double tollAmount) {
        totalVehicles++;
        totalRevenue += tollAmount;
    }

    int getTotalVehicles() const {
        return totalVehicles;
    }

    double getTotalRevenue() const {
        return totalRevenue;
    }
};

int main() {
    TollBooth booth;
    double standardCarToll = 2.0;
    double truckToll = 5.0;
    double busToll = 10.0;

    int choice;

    do {
        using namespace std; // Bring names from the std namespace into the current scope

        cout << "\nMenu:" << endl;
        cout << "1. Add a standard car and collect toll" << endl;
        cout << "2. Add a truck and collect toll" << endl;
        cout << "3. Add a bus and collect toll" << endl;
        cout << "4. Display total cars passed" << endl;
        cout << "5. Display total revenue collected" << endl;
        cout << "6. Reset booth statistics" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                booth.vehiclePayingToll(1, standardCarToll);
                cout << "Standard car added. Toll collected: $" << standardCarToll << endl;
                break;

            case 2:
                booth.vehiclePayingToll(2, truckToll);
                cout << "Truck added. Toll collected: $" << truckToll << endl;
                break;

            case 3:
                booth.vehiclePayingToll(3, busToll);
                cout << "Bus added. Toll collected: $" << busToll << endl;
                break;

            case 4:
                cout << "Total cars passed: " << booth.getTotalVehicles() << endl;
                break;

            case 5:
                cout << "Total revenue collected: $" << booth.getTotalRevenue() << endl;
                break;

            case 6:
                booth.reset();
                cout << "Booth statistics reset." << endl;
                break;

            case 7:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 8);

    return 0;
}




