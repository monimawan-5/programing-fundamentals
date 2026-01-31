#include<iostream>
using namespace std;
int main()
{
	int table , num;
	cout << " write a number of which you want table :";
	cin >> table;
	int i = 1;
	while ( i <= 20 )
	{
		cout << table << " x " << i << " = " << table * i << endl;
		i++; 
	}
	return 0;
	
}
