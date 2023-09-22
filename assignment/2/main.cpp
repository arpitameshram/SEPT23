#include <iostream>
#include <string>

class BankAccount {
private:
    int accountNumber;
    std::string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(int accNum, const std::string& accHolderName, double initialBalance)
        : accountNumber(accNum), accountHolderName(accHolderName), balance(initialBalance) {}

    // Getter and Setter methods
    int getAccountNumber() const { return accountNumber; }
    std::string getAccountHolderName() const { return accountHolderName; }
    double getBalance() const { return balance; }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit successful. New balance: " << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount. Please enter a positive amount." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal successful. New balance: " << balance << std::endl;
        } else if (amount <= 0) {
            std::cout << "Invalid withdrawal amount. Please enter a positive amount." << std::endl;
        } else {
            std::cout << "Insufficient balance for withdrawal." << std::endl;
        }
    }

    void displayAccountDetails() const {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder Name: " << accountHolderName << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main() {
    int accountNumber;
    std::string accountHolderName;
    double initialBalance;
    BankAccount account(0, "", 0.0);

    int choice;

    do {
        std::cout << "\nMenu:" << std::endl;
        std::cout << "1. Deposit money into an existing account" << std::endl;
        std::cout << "2. Withdraw money from an existing account" << std::endl;
        std::cout << "3. Display account details" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter account number: ";
                std::cin >> accountNumber;
                std::cout << "Enter deposit amount: ";
                double depositAmount;
                std::cin >> depositAmount;
                account.deposit(depositAmount);
                break;

            case 2:
                std::cout << "Enter account number: ";
                std::cin >> accountNumber;
                std::cout << "Enter withdrawal amount: ";
                double withdrawalAmount;
                std::cin >> withdrawalAmount;
                account.withdraw(withdrawalAmount);
                break;

            case 3:
                account.displayAccountDetails();
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



