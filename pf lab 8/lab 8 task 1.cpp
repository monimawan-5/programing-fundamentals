#include<iostream>
using namespace std;
int main()
{
	int a , b;
	cout << " enter first number :";
	cin >> a;
	cout << " enter second number :";
	cin >> b;
	char c;
	cout <<  "1 for addition (+) \n"
			 "2 for subtraction (-) \n"
			 "3 for multiplication (x) \n"
			 "4 for division (/) \n ";
    cin >> c;
	switch (c)
	{
	case '1':
	cout << "sum :" << a +b ;
	break;
	case '2':
	cout << "subtraction :" << a - b;
	break;
	case '3':
	cout << "multiplication :" << a * b;
	break;
	case '4':
	cout << "division :" << a / b;
	break;
	default:
	cout << " invalid choice :";
	break;
	}
	
	return 0;
}
	

