#include <iostream>
using namespace std;

int main() {
    int ele;
    cout << "Enter the number of elements in the array: ";
    cin >> ele;

    int arr[ele];

    for (int i = 0; i < ele; i++) {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> arr[i];
    }

       cout << "Array in reverse order: ";
    for (int i = ele - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

