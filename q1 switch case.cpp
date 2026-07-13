// Q11: Print Grade (A, B, C, D, F) based on marks
// Using: switch-case (marks divided by 10)

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks";
    }
    else {
        switch (marks / 10) {
            case 10:
            case 9:
            case 8:
                cout << "Grade: A";
                break;
            case 7:
                cout << "Grade: B";
                break;
            case 6:
                cout << "Grade: C";
                break;
            case 5:
                cout << "Grade: D";
                break;
            default:
                cout << "Grade: F";
        }
    }

    return 0;
}
