// Q20: Movie Ticket Type (Child, Adult, Senior Citizen)
// Using: Simple if (only if statements)

#include <iostream>
using namespace std;

int main() {
    int age;
    double ticketPrice = 0;
    string ticketType;
    
    cout << "Enter your age: ";
    cin >> age;
    
    if (age >= 0 && age <= 12) {
        ticketType = "Child";
        ticketPrice = 200;
    }
    
    if (age >= 13 && age <= 59) {
        ticketType = "Adult";
        ticketPrice = 500;
    }
    
    if (age >= 60) {
        ticketType = "Senior Citizen";
        ticketPrice = 300;
    }
    
    if (age < 0) {
        cout << "Invalid age entered!";
    }
    
    if (age >= 0) {
        cout << "Ticket Type: " << ticketType << endl;
        cout << "Ticket Price: Rs. " << ticketPrice;
    }
    
    return 0;
}
