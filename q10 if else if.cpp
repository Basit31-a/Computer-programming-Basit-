// Q20: Movie Ticket Type (Child, Adult, Senior Citizen)
// Using: if-else-if

#include <iostream>
using namespace std;

int main() {
    int age;
    double ticketPrice = 0;
    string ticketType;
    
    cout << "Enter your age: ";
    cin >> age;
    
    if (age < 0) {
        cout << "Invalid age entered!";
    }
    else if (age <= 12) {
        ticketType = "Child";
        ticketPrice = 200;
        cout << "Ticket Type: " << ticketType << endl;
        cout << "Ticket Price: Rs. " << ticketPrice;
    }
    else if (age <= 59) {
        ticketType = "Adult";
        ticketPrice = 500;
        cout << "Ticket Type: " << ticketType << endl;
        cout << "Ticket Price: Rs. " << ticketPrice;
    }
    else {
        ticketType = "Senior Citizen";
        ticketPrice = 300;
        cout << "Ticket Type: " << ticketType << endl;
        cout << "Ticket Price: Rs. " << ticketPrice;
    }
    
    return 0;
}
