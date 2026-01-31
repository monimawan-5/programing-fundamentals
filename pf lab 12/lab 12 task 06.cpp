#include <iostream>
using namespace std;

void bir(){
    int qun;
    cout << "1 plate of Biryani Rs = 150$" << endl;
    cout << "Enter the quantity: ";
    cin >> qun;
    cout << "Total cost Rs = " << 150 * qun << "$" << endl;
}

void piza(){
    int qun;
    cout << "1 Small Pizza Rs = 100$" << endl;
    cout << "Enter the quantity: ";
    cin >> qun;
    cout << "Total cost Rs = " << 100 * qun << "$" << endl;
}

void burger(){
    int qun;
    cout << "1 Zinger Burger Rs = 50$" << endl;
    cout << "Enter the quantity: ";
    cin >> qun;
    cout << "Total cost Rs = " << 50 * qun << "$" << endl;
}

void sandwich(){
    int qun;
    cout << "1 Sandwich Rs = 50$" << endl;
    cout << "Enter the quantity: ";
    cin >> qun;
    cout << "Total cost Rs = " << 50 * qun << "$" << endl;
}

void karahi(){
    int qun;
    cout << "1 Chicken Karahi Rs = 200$" << endl;
    cout << "Enter the quantity: ";
    cin >> qun;
    cout << "Total cost Rs = " << 200 * qun << "$" << endl;
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

        switch(choice){
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

