#include<iostream>
using namespace std;
int main()
{
	int pas=1234;
	int password;
	do{
		cout << " Enter your password :";
		cin >> password;
		if ( password != pas)
		cout << " wrong password! Enter correct password. \n";
	}
	 while ( password != pas);
	{
	cout << " correct password ";
	}
	return 0;
	
}
