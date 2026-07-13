// Q20: Movie Ticket Type (Child, Adult, Senior Citizen)
// Using: if-else

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
        cout << "Ticket Type: " << ticketType << endl;
        cout << "Ticket Price: Rs. " << ticketPrice;
    }
    else if (age >= 13 && age <= 59) {
        ticketType = "Adult";
        ticketPrice = 500;
        cout << "Ticket Type: " << ticketType << endl;
        cout << "Ticket Price: Rs. " << ticketPrice;
    }
    else if (age >= 60) {
        ticketType = "Senior Citizen";
        ticketPrice = 300;
        cout << "Ticket Type: " << ticketType << endl;
        cout << "Ticket Price: Rs. " << ticketPrice;
    }
    else {
        cout << "Invalid age entered!";
    }
    
    return 0;
}
