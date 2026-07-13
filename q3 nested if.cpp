// Q13: Check Temperature (Hot, Normal, or Cold)
// Using: Nested if

#include <iostream>
using namespace std;

int main() {
    double temp;
    
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    
    if (temp >= 15) {
        if (temp >= 30) {
            cout << "Temperature: Hot";
        }
        else {
            cout << "Temperature: Normal";
        }
    }
    else {
        cout << "Temperature: Cold";
    }
    
    return 0;
}
