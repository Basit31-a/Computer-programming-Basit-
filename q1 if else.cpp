// Q11: Print Grade (A, B, C, D, F) based on marks
// Using: if-else

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 80 && marks <= 100)
        cout << "Grade: A";
    else if (marks >= 70 && marks <= 79)
        cout << "Grade: B";
    else if (marks >= 60 && marks <= 69)
        cout << "Grade: C";
    else if (marks >= 50 && marks <= 59)
        cout << "Grade: D";
    else if (marks >= 0 && marks <= 49)
        cout << "Grade: F";
    else
        cout << "Invalid marks";

    return 0;
}
