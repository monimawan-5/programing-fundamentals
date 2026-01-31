#include <iostream>
using namespace std;

int main()
{
    int sum = 0, num;

    cout << "Enter natural number for sum: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    cout << "The sum of Natural numbers is = " << sum;

    return 0;
}

