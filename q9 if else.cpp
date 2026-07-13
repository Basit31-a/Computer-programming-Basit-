// Q19: Restaurant Menu Selection
// Using: if-else

#include <iostream>
using namespace std;

int main() {
    int choice;
    int quantity;
    double total = 0;
    
    cout << "========== RESTAURANT MENU ==========" << endl;
    cout << "1. Burger      - Rs. 300" << endl;
    cout << "2. Pizza       - Rs. 500" << endl;
    cout << "3. Pasta       - Rs. 400" << endl;
    cout << "4. Sandwich    - Rs. 200" << endl;
    cout << "5. Salad       - Rs. 150" << endl;
    cout << "=====================================" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice;
    
    if (choice >= 1 && choice <= 5) {
        cout << "Enter quantity: ";
        cin >> quantity;
        
        if (quantity > 0) {
            if (choice == 1) {
                total = quantity * 300;
                cout << "Item: Burger" << endl;
                cout << "Price per item: Rs. 300" << endl;
                cout << "Quantity: " << quantity << endl;
                cout << "Total Bill: Rs. " << total;
            }
            else if (choice == 2) {
                total = quantity * 500;
                cout << "Item: Pizza" << endl;
                cout << "Price per item: Rs. 500" << endl;
                cout << "Quantity: " << quantity << endl;
                cout << "Total Bill: Rs. " << total;
            }
            else if (choice == 3) {
                total = quantity * 400;
                cout << "Item: Pasta" << endl;
                cout << "Price per item: Rs. 400" << endl;
                cout << "Quantity: " << quantity << endl;
                cout << "Total Bill: Rs. " << total;
            }
            else if (choice == 4) {
                total = quantity * 200;
                cout << "Item: Sandwich" << endl;
                cout << "Price per item: Rs. 200" << endl;
                cout << "Quantity: " << quantity << endl;
                cout << "Total Bill: Rs. " << total;
            }
            else if (choice == 5) {
                total = quantity * 150;
                cout << "Item: Salad" << endl;
                cout << "Price per item: Rs. 150" << endl;
                cout << "Quantity: " << quantity << endl;
                cout << "Total Bill: Rs. " << total;
            }
        }
        else {
            cout << "Invalid quantity! Quantity must be greater than 0.";
        }
    }
    else {
        cout << "Invalid choice! Please select 1-5.";
    }
    
    return 0;
}
