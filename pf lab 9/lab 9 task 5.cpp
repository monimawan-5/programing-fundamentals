#include<iostream>
using namespace std;
int main()
{
	int money , withdraw , balance;
	cout << " enter how much amount you want to deposit :";
	cin >> money;
	cout << "enter your withdrawal amount :";
	cin >> withdraw;
	while (withdraw > money )
	{
	cout << "you enter invalid amount. Please enter valid amount ";
	cin >> withdraw;}
	cout << " withdraw :" << withdraw << endl;
	balance = money-withdraw;
	cout << "balance :" << balance << endl;
	int ex;
	cout << "Enter 1 for exit. ";
	cin >> ex;
	while ( ex != 1 )
	{
		cout << " Enter 1 for exit. you entered invalid number.";
		cin >> ex;
	}
	cout << " Exit Conformed ";
	
	return 0;
}
