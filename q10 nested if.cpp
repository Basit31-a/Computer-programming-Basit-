// Q20: Movie Ticket Type (Child, Adult, Senior Citizen)
// Using: Nested if

#include <iostream>
using namespace std;

int main() {
    int age;
    double ticketPrice = 0;
    string ticketType;
    
    cout << "Enter your age: ";
    cin >> age;
    
    if (age >= 0) {
        if (age <= 12) {
            ticketType = "Child";
            ticketPrice = 200;
        }
        else {
            if (age <= 59) {
                ticketType = "Adult";
                ticketPrice = 500;
            }
            else {
                ticketType = "Senior Citizen";
                ticketPrice = 300;
            }
        }
        
        cout << "Ticket Type: " << ticketType << endl;
        cout << "Ticket Price: Rs. " << ticketPrice;
    }
    else {
        cout << "Invalid age entered!";
    }
    
    return 0;
}
