// Q11: Print Grade (A, B, C, D, F) based on marks
// Using: Simple if (only if statements)

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 80 && marks <= 100)
        cout << "Grade: A";

    if (marks >= 70 && marks <= 79)
        cout << "Grade: B";

    if (marks >= 60 && marks <= 69)
        cout << "Grade: C";

    if (marks >= 50 && marks <= 59)
        cout << "Grade: D";

    if (marks >= 0 && marks <= 49)
        cout << "Grade: F";

    if (marks < 0 || marks > 100)
        cout << "Invalid marks";

    return 0;
}
