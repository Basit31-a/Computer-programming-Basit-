// Q17: ATM Menu (Balance, Deposit, Withdraw)
// Using: Nested if

#include <iostream>
using namespace std;

int main() {
    double balance = 5000.0;  // Initial balance
    int choice;
    double amount;
    
    cout << "========== ATM MENU ==========" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;
    cout << "===============================" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    if (choice >= 1 && choice <= 4) {
        if (choice == 1) {
            cout << "Your current balance is: Rs. " << balance;
        }
        else {
            if (choice == 2) {
                cout << "Enter amount to deposit: Rs. ";
                cin >> amount;
                if (amount > 0) {
                    balance = balance + amount;
                    cout << "Amount deposited successfully!" << endl;
                    cout << "New balance: Rs. " << balance;
                }
                else {
                    cout << "Invalid amount! Amount must be greater than 0.";
                }
            }
            else {
                if (choice == 3) {
                    cout << "Enter amount to withdraw: Rs. ";
                    cin >> amount;
                    if (amount > 0) {
                        if (amount <= balance) {
                            balance = balance - amount;
                            cout << "Amount withdrawn successfully!" << endl;
                            cout << "Remaining balance: Rs. " << balance;
                        }
                        else {
                            cout << "Insufficient balance! Your balance is Rs. " << balance;
                        }
                    }
                    else {
                        cout << "Invalid amount! Amount must be greater than 0.";
                    }
                }
                else {
                    if (choice == 4) {
                        cout << "Thank you for using ATM. Goodbye!";
                    }
                }
            }
        }
    }
    else {
        cout << "Invalid choice! Please select 1-4.";
    }
    
    return 0;
}
