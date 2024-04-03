// labbbbb.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Account.h"

using namespace std;

int main() {
    vector<Account> accounts{
        Account("Jane Green", 50),
        Account("John Blue", 0),
        Account("Jack Red", 10)
    };

    // Display initial balances
    for (const auto& account : accounts) {
        cout << account.getName() << " balance is $" << account.getBalance() << endl;
    }
    cout << endl;

    // Process transactions for each account
    for (auto& account : accounts) {
        int depositAmount;
        int withdrawalAmount;

        // Deposit
        while (true) {
            cout << "Enter deposit amount for " << account.getName() << ": ";
            cin >> depositAmount;
            if (depositAmount >= 0) {
                account.deposit(depositAmount);
                break;
            }
            else {
                cout << "Error: Deposit amount must be positive." << endl;
            }
        }

        // Withdrawal
        while (true) {
            cout << "Enter withdrawal amount for " << account.getName() << ": ";
            cin >> withdrawalAmount;
            if (withdrawalAmount >= 0) {
                account.withdraw(withdrawalAmount);
                break;
            }
            else {
                cout << "Error: Withdrawal amount must be positive." << endl;
            }
        }

        // Display balance after transactions
        cout << account.getName() << " balance is $" << account.getBalance() << endl << endl;
    }

    for (const auto& account : accounts) {
        cout << account.getName() << " balance is $" << account.getBalance() << endl;
    }

    return 0;
}
