// Q14: Print Electricity Bill Category based on units
// Using: if-else-if 

#include <iostream>
using namespace std;

int main() {
    int units;
    double bill = 0;
    
    cout << "Enter electricity units consumed: ";
    cin >> units;
    
    if (units < 0) {
        cout << "Invalid units entered";
    }
    else if (units <= 100) {
        bill = units * 5;
        cout << "Category: Low" << endl;
        cout << "Bill Amount: Rs. " << bill;
    }
    else if (units <= 300) {
        bill = units * 7;
        cout << "Category: Medium" << endl;
        cout << "Bill Amount: Rs. " << bill;
    }
    else if (units <= 500) {
        bill = units * 10;
        cout << "Category: High" << endl;
        cout << "Bill Amount: Rs. " << bill;
    }
    else {
        bill = units * 15;
        cout << "Category: Very High" << endl;
        cout << "Bill Amount: Rs. " << bill;
    }
    
    return 0;
}
