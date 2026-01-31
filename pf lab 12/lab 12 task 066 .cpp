#include <iostream>
using namespace std;

// Function to calculate 10% service tax
double calculateTax(double amount) {
    return amount * 0.10; 
}

// First function for Biryani
void bir() {
    int qun;
    double total, tax;
    cout << "1 plate of Biryani Rs = 150$" << endl;
    cout << "Enter the quantity: ";
    cin >> qun;
    total = 150 * qun;
    tax = calculateTax(total); 
    cout << "Total cost = " << total << "$" << endl;
    cout << "Service Tax (10%) = " << tax << "$" << endl;
    cout << "Amount with tax = " << total + tax << "$" << endl;
}

// Second function for Pizza
void piza() {
    int qun;
    double total, tax;
    cout << "1 Small Pizza Rs = 100$" << endl;
    cout << "Enter the quantity: ";
    cin >> qun;
    total = 100 * qun;
    tax = calculateTax(total);
    cout << "Total cost = " << total << "$" << endl;
    cout << "Service Tax (10%) = " << tax << "$" << endl;
    cout << "Amount with tax = " << total + tax << "$" << endl;
}

// Third function for Burger
void burger() {
    int qun;
    double total, tax;
    cout << "1 Zinger Burger Rs = 50$" << endl;
    cout << "Enter the quantity: ";
    cin >> qun;
    total = 50 * qun;
    tax = calculateTax(total);
    cout << "Total cost = " << total << "$" << endl;
    cout << "Service Tax (10%) = " << tax << "$" << endl;
    cout << "Amount with tax = " << total + tax << "$" << endl;
}

// Function for Sandwich
void sandwich() {
    int qun;
    double total, tax;
    cout << "1 Sandwich Rs = 50$" << endl;
    cout << "Enter the quantity: ";
    cin >> qun;
    total = 50 * qun;
    tax = calculateTax(total);
    cout << "Total cost = " << total << "$" << endl;
    cout << "Service Tax (10%) = " << tax << "$" << endl;
    cout << "Amount with tax = " << total + tax << "$" << endl;
}

// Function for Chicken Karahi
void karahi() {
    int qun;
    double total, tax;
    cout << "1 Chicken Karahi Rs = 200$" << endl;
    cout << "Enter the quantity: ";
    cin >> qun;
    total = 200 * qun;
    tax = calculateTax(total);
    cout << "Total cost = " << total << "$" << endl;
    cout << "Service Tax (10%) = " << tax << "$" << endl;
    cout << "Amount with tax = " << total + tax << "$" << endl;
}

int main() {
    int choice;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Biryani" << endl;
        cout << "2. Pizza" << endl;
        cout << "3. Burger" << endl;
        cout << "4. Sandwich" << endl;
        cout << "5. Chicken Karahi" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: bir(); break;
            case 2: piza(); break;
            case 3: burger(); break;
            case 4: sandwich(); break;
            case 5: karahi(); break;
            case 6: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid choice!" << endl;
        }

    } while(choice != 6);

    return 0;
}

