// Q12: Calculator (+, -, *, /)
// Using: Simple if (only if statements)

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
    
    if (op == '+')
        cout << "Result: " << num1 + num2;
    
    if (op == '-')
        cout << "Result: " << num1 - num2;
    
    if (op == '*')
        cout << "Result: " << num1 * num2;
    
    if (op == '/') {
        if (num2 != 0)
            cout << "Result: " << num1 / num2;
        else
            cout << "Error: Division by zero";
    }
    
    if (op != '+' && op != '-' && op != '*' && op != '/')
        cout << "Invalid operator";
    
    return 0;
}
