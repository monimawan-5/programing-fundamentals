#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "enter an integer:";
	cin >> a;
	if ( a > 0 )
	{ cout << "positive number";
	}
	else if  ( a < 0 )
	{
	cout << "negative numbef";}
	else if (a = 0){
		cout<< "number equal to zero";
		
	}
	else {
		cout << "you enter invalid number";
	}
	return 0;
	
}
