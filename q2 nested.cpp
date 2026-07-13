// Q12: Calculator (+, -, *, /)
// Using: Nested if

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    
    if (op == '+' || op == '-' || op == '*' || op == '/') {
        if (op == '+') {
            cout << "Result: " << num1 + num2;
        }
        else {
            if (op == '-') {
                cout << "Result: " << num1 - num2;
            }
            else {
                if (op == '*') {
                    cout << "Result: " << num1 * num2;
                }
                else {
                    if (num2 != 0)
                        cout << "Result: " << num1 / num2;
                    else
                        cout << "Error: Division by zero";
                }
            }
        }
    }
    else {
        cout << "Invalid operator";
    }
    
    return 0;
}
