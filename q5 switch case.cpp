// Q15: Decide Bonus based on Salary
// Using: switch-case (using salary ranges)

#include <iostream>
using namespace std;

int main() {
    double salary, bonus = 0;
    int category;
    
    cout << "Enter your salary: Rs. ";
    cin >> salary;
    
    // Determine category based on salary
    if (salary < 0) {
        category = 0;  // Invalid
    }
    else if (salary < 20000) {
        category = 1;  // Low salary
    }
    else if (salary <= 50000) {
        category = 2;  // Medium salary
    }
    else if (salary <= 100000) {
        category = 3;  // High salary
    }
    else {
        category = 4;  // Very high salary
    }
    
    switch (category) {
        case 0:
            cout << "Invalid salary entered";
            break;
            
        case 1:
            bonus = salary * 0.10;
            cout << "Salary: Rs. " << salary << endl;
            cout << "Bonus Rate: 10%" << endl;
            cout << "Bonus Amount: Rs. " << bonus;
            break;
            
        case 2:
            bonus = salary * 0.07;
            cout << "Salary: Rs. " << salary << endl;
            cout << "Bonus Rate: 7%" << endl;
            cout << "Bonus Amount: Rs. " << bonus;
            break;
            
        case 3:
            bonus = salary * 0.05;
            cout << "Salary: Rs. " << salary << endl;
            cout << "Bonus Rate: 5%" << endl;
            cout << "Bonus Amount: Rs. " << bonus;
            break;
            
        case 4:
            bonus = salary * 0.03;
            cout << "Salary: Rs. " << salary << endl;
            cout << "Bonus Rate: 3%" << endl;
            cout << "Bonus Amount: Rs. " << bonus;
            break;
            
        default:
            cout << "Invalid category";
    }
    
    return 0;
}
