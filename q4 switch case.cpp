// Q14: Print Electricity Bill Category based on units
// Using: switch-case (using unit ranges)

#include <iostream>
using namespace std;

int main() {
    int units;
    double bill = 0;
    int category;
    
    cout << "Enter electricity units consumed: ";
    cin >> units;
    
    // Determine category based on units
    if (units < 0) {
        category = 0;  // Invalid
    }
    else if (units <= 100) {
        category = 1;  // Low
    }
    else if (units <= 300) {
        category = 2;  // Medium
    }
    else if (units <= 500) {
        category = 3;  // High
    }
    else {
        category = 4;  // Very High
    }
    
    switch (category) {
        case 0:
            cout << "Invalid units entered";
            break;
            
        case 1:
            bill = units * 5;
            cout << "Category: Low" << endl;
            cout << "Bill Amount: Rs. " << bill;
            break;
            
        case 2:
            bill = units * 7;
            cout << "Category: Medium" << endl;
            cout << "Bill Amount: Rs. " << bill;
            break;
            
        case 3:
            bill = units * 10;
            cout << "Category: High" << endl;
            cout << "Bill Amount: Rs. " << bill;
            break;
            
        case 4:
            bill = units * 15;
            cout << "Category: Very High" << endl;
            cout << "Bill Amount: Rs. " << bill;
            break;
            
        default:
            cout << "Invalid category";
    }
    
    return 0;
}
