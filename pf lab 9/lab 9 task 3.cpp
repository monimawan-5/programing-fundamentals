#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a positive number :";
	cin >> num;
	 while ( num <= 0 )
	{
	  cout << "you input a rong number. Enter a positive number :";
	  cin >> num;
	  
	  }
	  cout << "The positive number is :" << num << endl;
	
	return 0;
}
