// Q16: Give Discount based on Shopping Amount
// Using: Simple if (only if statements)

#include <iostream>
using namespace std;

int main() {
    double amount, discount = 0, finalAmount;
    
    cout << "Enter shopping amount: Rs. ";
    cin >> amount;
    
    if (amount >= 0 && amount < 1000) {
        discount = 0;
        cout << "Original Amount: Rs. " << amount << endl;
        cout << "Discount Rate: 0%" << endl;
        cout << "Discount Amount: Rs. " << discount << endl;
        cout << "Final Amount: Rs. " << amount;
    }
    
    if (amount >= 1000 && amount <= 2000) {
        discount = amount * 0.05;
        finalAmount = amount - discount;
        cout << "Original Amount: Rs. " << amount << endl;
        cout << "Discount Rate: 5%" << endl;
        cout << "Discount Amount: Rs. " << discount << endl;
        cout << "Final Amount: Rs. " << finalAmount;
    }
    
    if (amount > 2000 && amount <= 5000) {
        discount = amount * 0.10;
        finalAmount = amount - discount;
        cout << "Original Amount: Rs. " << amount << endl;
        cout << "Discount Rate: 10%" << endl;
        cout << "Discount Amount: Rs. " << discount << endl;
        cout << "Final Amount: Rs. " << finalAmount;
    }
    
    if (amount > 5000 && amount <= 10000) {
        discount = amount * 0.15;
        finalAmount = amount - discount;
        cout << "Original Amount: Rs. " << amount << endl;
        cout << "Discount Rate: 15%" << endl;
        cout << "Discount Amount: Rs. " << discount << endl;
        cout << "Final Amount: Rs. " << finalAmount;
    }
    
    if (amount > 10000) {
        discount = amount * 0.20;
        finalAmount = amount - discount;
        cout << "Original Amount: Rs. " << amount << endl;
        cout << "Discount Rate: 20%" << endl;
        cout << "Discount Amount: Rs. " << discount << endl;
        cout << "Final Amount: Rs. " << finalAmount;
    }
    
    if (amount < 0) {
        cout << "Invalid amount entered";
    }
    
    return 0;
}
