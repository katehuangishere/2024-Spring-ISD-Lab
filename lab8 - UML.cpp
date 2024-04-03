// lab8 - UML.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Account {
private:
    string username;
    double balance;

public:
    // Constructor to initialize the account with a username and an initial balance.
    Account(string name, double initial_balance) : username(name), balance(initial_balance) {}

    void deposit(double amount) {
        if (amount < 0) {
            cout << "Error: Cannot deposit negative amount." << endl;
        }
        else {
            balance += amount;
            cout << "Deposit successful: Adding " << amount << " to " << username << "'s balance." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount < 0) {
            cout << "Error: Cannot withdraw negative amount." << endl;
        }
        else if (amount > balance) {
            cout << "Error: Insufficient funds for withdrawal." << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrawal successful: Subtracting " << amount << " from " << username << "'s balance." << endl;
        }
    }

    void display_balance() const {
        cout << username << " balance is $" << balance << endl;
    }

    string get_username() const {
        return username;
    }

    double get_balance() const {
        return balance;
    }
};

int main() {

    Account account1("Jane Green", 50);
    Account account2("John Blue", 0);
    Account account3("Jack Red", 10);

    // Display initial balances
    account1.display_balance();
    account2.display_balance();
    account3.display_balance();
    cout << endl;

    double depositAmount;
    double withdrawalAmount;

    // Process transactions for account1
    cout << "Enter deposit amount for account1: ";
    cin >> depositAmount;
    account1.deposit(depositAmount);
    cout << "Enter withdrawal amount for account1: ";
    cin >> withdrawalAmount;
    account1.withdraw(withdrawalAmount);
    account1.display_balance();
    cout << endl;

    // Process transactions for account2
    cout << "Enter deposit amount for account2: ";
    cin >> depositAmount;
    account2.deposit(depositAmount);
    cout << "Enter withdrawal amount for account2: ";
    cin >> withdrawalAmount;
    account2.withdraw(withdrawalAmount);
    account2.display_balance();
    cout << endl;

    // Process transactions for account3
    cout << "Enter deposit amount for account3: ";
    cin >> depositAmount;
    account3.deposit(depositAmount);
    cout << "Enter withdrawal amount for account3: ";
    cin >> withdrawalAmount;
    account3.withdraw(withdrawalAmount);
    account3.display_balance();
    cout << endl;

    // Display final balances before the program quits
    account1.display_balance();
    account2.display_balance();
    account3.display_balance();
    cout << endl;

    return 0;
}

