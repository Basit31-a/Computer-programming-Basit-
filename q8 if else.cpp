// Q18: Mobile Package Selection (1, 2, 3)
// Using: if-else

#include <iostream>
using namespace std;

int main() {
    int choice;
    
    cout << "========== MOBILE PACKAGES ==========" << endl;
    cout << "1. Basic Package" << endl;
    cout << "2. Standard Package" << endl;
    cout << "3. Premium Package" << endl;
    cout << "=====================================" << endl;
    cout << "Select your package (1-3): ";
    cin >> choice;
    
    if (choice == 1) {
        cout << "You selected: Basic Package" << endl;
        cout << "Monthly Rent: Rs. 500" << endl;
        cout << "Minutes: 300" << endl;
        cout << "Data: 2GB" << endl;
        cout << "SMS: 1000";
    }
    else if (choice == 2) {
        cout << "You selected: Standard Package" << endl;
        cout << "Monthly Rent: Rs. 800" << endl;
        cout << "Minutes: 600" << endl;
        cout << "Data: 5GB" << endl;
        cout << "SMS: 2000";
    }
    else if (choice == 3) {
        cout << "You selected: Premium Package" << endl;
        cout << "Monthly Rent: Rs. 1200" << endl;
        cout << "Minutes: Unlimited" << endl;
        cout << "Data: 10GB" << endl;
        cout << "SMS: Unlimited";
    }
    else {
        cout << "Invalid selection! Please select 1, 2, or 3.";
    }
    
    return 0;
}
