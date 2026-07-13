// Q20: Movie Ticket Type (Child, Adult, Senior Citizen)
// Using: switch-case (using age categories)

#include <iostream>
using namespace std;

int main() {
    int age;
    double ticketPrice = 0;
    string ticketType;
    int category;
    
    cout << "Enter your age: ";
    cin >> age;
    
    // Determine category based on age
    if (age < 0) {
        category = 0;  // Invalid
    }
    else if (age <= 12) {
        category = 1;  // Child
    }
    else if (age <= 59) {
        category = 2;  // Adult
    }
    else {
        category = 3;  // Senior Citizen
    }
    
    switch (category) {
        case 0:
            cout << "Invalid age entered!";
            break;
            
        case 1:
            ticketType = "Child";
            ticketPrice = 200;
            cout << "Ticket Type: " << ticketType << endl;
            cout << "Ticket Price: Rs. " << ticketPrice;
            break;
            
        case 2:
            ticketType = "Adult";
            ticketPrice = 500;
            cout << "Ticket Type: " << ticketType << endl;
            cout << "Ticket Price: Rs. " << ticketPrice;
            break;
            
        case 3:
            ticketType = "Senior Citizen";
            ticketPrice = 300;
            cout << "Ticket Type: " << ticketType << endl;
            cout << "Ticket Price: Rs. " << ticketPrice;
            break;
            
        default:
            cout << "Invalid category!";
    }
    
    return 0;
}
