// Q11: Print Grade (A, B, C, D, F) based on marks
// Using: Nested if

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 0 && marks <= 100) {
        if (marks >= 80)
            cout << "Grade: A";
        else {
            if (marks >= 70)
                cout << "Grade: B";
            else {
                if (marks >= 60)
                    cout << "Grade: C";
                else {
                    if (marks >= 50)
                        cout << "Grade: D";
                    else
                        cout << "Grade: F";
                }
            }
        }
    }
    else {
        cout << "Invalid marks";
    }

    return 0;
}
