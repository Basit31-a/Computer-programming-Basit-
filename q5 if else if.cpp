// Q15: Decide Bonus based on Salary
// Using: if-else-if 

#include <iostream>
using namespace std;

int main() {
    double salary, bonus = 0;
    
    cout << "Enter your salary: Rs. ";
    cin >> salary;
    
    if (salary < 0) {
        cout << "Invalid salary entered";
    }
    else if (salary < 20000) {
        bonus = salary * 0.10;
        cout << "Salary: Rs. " << salary << endl;
        cout << "Bonus Rate: 10%" << endl;
        cout << "Bonus Amount: Rs. " << bonus;
    }
    else if (salary <= 50000) {
        bonus = salary * 0.07;
        cout << "Salary: Rs. " << salary << endl;
        cout << "Bonus Rate: 7%" << endl;
        cout << "Bonus Amount: Rs. " << bonus;
    }
    else if (salary <= 100000) {
        bonus = salary * 0.05;
        cout << "Salary: Rs. " << salary << endl;
        cout << "Bonus Rate: 5%" << endl;
        cout << "Bonus Amount: Rs. " << bonus;
    }
    else {
        bonus = salary * 0.03;
        cout << "Salary: Rs. " << salary << endl;
        cout << "Bonus Rate: 3%" << endl;
        cout << "Bonus Amount: Rs. " << bonus;
    }
    
    return 0;
}
