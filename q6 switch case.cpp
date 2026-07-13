// Q16: Give Discount based on Shopping Amount
// Using: switch-case (using amount ranges)

#include <iostream>
using namespace std;

int main() {
    double amount, discount = 0, finalAmount;
    int category;
    
    cout << "Enter shopping amount: Rs. ";
    cin >> amount;
    
    // Determine category based on amount
    if (amount < 0) {
        category = 0;  // Invalid
    }
    else if (amount < 1000) {
        category = 1;  // No discount
    }
    else if (amount <= 2000) {
        category = 2;  // 5% discount
    }
    else if (amount <= 5000) {
        category = 3;  // 10% discount
    }
    else if (amount <= 10000) {
        category = 4;  // 15% discount
    }
    else {
        category = 5;  // 20% discount
    }
    
    switch (category) {
        case 0:
            cout << "Invalid amount entered";
            break;
            
        case 1:
            discount = 0;
            cout << "Original Amount: Rs. " << amount << endl;
            cout << "Discount Rate: 0%" << endl;
            cout << "Discount Amount: Rs. " << discount << endl;
            cout << "Final Amount: Rs. " << amount;
            break;
            
        case 2:
            discount = amount * 0.05;
            finalAmount = amount - discount;
            cout << "Original Amount: Rs. " << amount << endl;
            cout << "Discount Rate: 5%" << endl;
            cout << "Discount Amount: Rs. " << discount << endl;
            cout << "Final Amount: Rs. " << finalAmount;
            break;
            
        case 3:
            discount = amount * 0.10;
            finalAmount = amount - discount;
            cout << "Original Amount: Rs. " << amount << endl;
            cout << "Discount Rate: 10%" << endl;
            cout << "Discount Amount: Rs. " << discount << endl;
            cout << "Final Amount: Rs. " << finalAmount;
            break;
            
        case 4:
            discount = amount * 0.15;
            finalAmount = amount - discount;
            cout << "Original Amount: Rs. " << amount << endl;
            cout << "Discount Rate: 15%" << endl;
            cout << "Discount Amount: Rs. " << discount << endl;
            cout << "Final Amount: Rs. " << finalAmount;
            break;
            
        case 5:
            discount = amount * 0.20;
            finalAmount = amount - discount;
            cout << "Original Amount: Rs. " << amount << endl;
            cout << "Discount Rate: 20%" << endl;
            cout << "Discount Amount: Rs. " << discount << endl;
            cout << "Final Amount: Rs. " << finalAmount;
            break;
            
        default:
            cout << "Invalid category";
    }
    
    return 0;
}
