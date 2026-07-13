// Q13: Check Temperature (Hot, Normal, or Cold)
// Using: switch-case (using integer division)

#include <iostream>
using namespace std;

int main() {
    double temp;
    int category;
    
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    
    // Convert temperature to category
    if (temp >= 30)
        category = 3;  // Hot
    else if (temp >= 15)
        category = 2;  // Normal
    else
        category = 1;  // Cold
    
    switch (category) {
        case 3:
            cout << "Temperature: Hot";
            break;
        case 2:
            cout << "Temperature: Normal";
            break;
        case 1:
            cout << "Temperature: Cold";
            break;
        default:
            cout << "Invalid temperature";
    }
    
    return 0;
}
